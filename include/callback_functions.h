#include <stdbool.h>
#include "board.h"
#include "sudoku_validation.h"
GtkWidget*  window;
GtkWidget*  window2;
GtkWidget*  s6;
GtkWidget*  s9;
GtkWidget* notvalid;
GtkWidget* good;
GtkWidget*  drules; 

GtkWidget*  button1;
GtkWidget*  button2;
GtkWidget*  rules;

bool frst = 0;


int fill(bool c){
    int n;
    freopen("data/type.txt", "r", stdin);
    scanf("%d", &n);
    int su[n][n];
    freopen("data/deflogs.txt", "r", stdin);

    if(c)
        memset(fxd, 0, sizeof(fxd));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &su[i][j]);
            if(su[i][j]) fxd[i][j] = 1;
        }
    }

    freopen("data/logs.txt", "r", stdin);
    for(int i = 0 ;i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &su[i][j]);
            if(n==6){
                su6[i][j] = su[i][j];
            }
            else{
                su9[i][j] = su[i][j];
            }
        }
    }

    GtkWidget* labels[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            char tmp[2];
            tmp[0] = (char) (su[i][j] + '0');
            tmp[1] = '\0';
            
            if(n == 6){
                char loc[3];
                loc[0] = 'l';
                loc[1] = (char) (i+'0');
                loc[2] = (char) (j+'0');
                labels[i][j] = GTK_WIDGET(gtk_builder_get_object(builder, loc));     
            }
            else{
                char loc[4];
                loc[0] = 'l';
                loc[1] = '9';
                loc[2] = (char)(i+'0');
                loc[3] = (char) (j+'0');

                labels[i][j] = GTK_WIDGET(gtk_builder_get_object(builder, loc));     
            }
            GdkColor color;
            GdkRGBA df;
            if(!gdk_color_parse("green", &color)){
                color.red = 0x3333;
                color.green = 0x3333;
                color.blue = 0x9999;
            }
            
            df.red = 0.5;
            df.blue=1.0;
            df.green=0.3;
            df.alpha= 1.0;


            gtk_widget_modify_bg(labels[i][j], GTK_STATE_NORMAL, &df);
            if(!su[i][j]) tmp[0] = ' ';
            if(fxd[i][j]) 
                gtk_widget_modify_bg(labels[i][j], GTK_STATE_NORMAL, &color);
            gtk_label_set_text(GTK_LABEL(labels[i][j]), tmp);
        }
    }
    return n;
}

void on_rules_clicked(GtkButton* b){
    gtk_widget_show(drules);
}

void on_button1_clicked (GtkButton* b){
    gtk_widget_show(window2);
    gtk_widget_hide(window);
}

void on_close_rules_clicked(GtkButton* b){
    gtk_widget_hide(drules);
}

void on_back_clicked(GtkButton* b){
    gtk_widget_show(window);
    gtk_widget_hide(window2);
}

void on_s6back_clicked(GtkButton* b){
    gtk_widget_show(window);
    gtk_widget_hide(s6);
}

void on_easy_clicked(GtkButton* b){
    system("gcc src/gen6.c -I include/ -o log.o");
    system("./log.o > data/logs.txt");    
    system("./log.o > data/deflogs.txt");
    fill(1);
    gtk_widget_show(s6);
    gtk_widget_hide(window2);
}

void on_hard_clicked(GtkButton* b){
    system("gcc src/gen9.c -I include/ -o log.o");
    system("./log.o > data/logs.txt");
    system("./log.o > data/deflogs.txt");
    fill(1);
    gtk_widget_show(s9);
    gtk_widget_hide(window2);   
}

void on_s9back_clicked(GtkButton* b){
    gtk_widget_show(window);
    gtk_widget_hide(s9);
}

void on_continue_clicked(GtkButton* b){
    int n = fill(0);
    if(n == 6){
        gtk_widget_show(s6);
        gtk_widget_hide(window);
    }
    else{
        gtk_widget_show(s9);
        gtk_widget_hide(window);
    } 
}

void on_save6_clicked(GtkButton* b){
    FILE* fl;
    fl = freopen("data/logs.txt", "w", stdout);
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            printf("%d ", su6[i][j]);
        }
        printf("%c", '\n');
    }
    fclose(fl);
    system("echo 6 > data/type.txt");
}

void on_save9_clicked(GtkButton* b){
    FILE* fl;
    fl = freopen("data/logs.txt", "w", stdout);
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            printf("%d ", su9[i][j]);
        }
        printf("%c", '\n');
    }
    fclose(fl);
    system("echo 9 > data/type.txt");
}

void on_submit6_clicked(GtkButton* b){
    for(int i = 0 ;i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(!no_empty6(su6) || !valid6(i, j, su6)){
                gtk_widget_show(notvalid);
                return;
            }
        }
    }
    gtk_widget_show(good);
}
void on_submit9_clicked(GtkButton* b){
    for(int i = 0 ;i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(!no_empty9(su9) || !valid9(i, j, su9)){
                gtk_widget_show(notvalid);
                return;
            }
        }
    }
    gtk_widget_show(good);
}

void on_close0_clicked(GtkButton* b){
    gtk_widget_hide(notvalid);
}
void on_close1_clicked(GtkButton* b){
    gtk_widget_hide(good);
}
