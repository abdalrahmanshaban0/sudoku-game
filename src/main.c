#include <stdio.h>
#include <gtk/gtk.h>

typedef struct{
    int x;
    int y;
} btn;

#include "callback_functions.h"
#include "gtk_stuff.h"



int main (int argc, char **argv){
    gtk_init(&argc, &argv);
    guibuild();
    windows();
    destroys();

    GtkWidget* board[6][6];
    GtkWidget* boardh[9][9];
    btn id[6*6], idh[9*9];
    int cnt = 0;

    for(int i =  0; i< 6; i++){
        for(int j = 0; j < 6; j++){
            id[cnt].x = i;
            id[cnt].y = j;

            char loc[3];
            loc[0] = 'b';
            loc[1] = (char)(i+'0');
            loc[2] = (char)(j+'0');
            
            board[i][j] = GTK_WIDGET(gtk_builder_get_object(builder, loc));
            g_signal_connect(board[i][j], "clicked", G_CALLBACK(on_b00_clicked), &id[cnt]);
            cnt++;
        }
    }

    cnt = 0;

    for(int i = 0 ;i < 9; i++){
        for(int j = 0; j < 9; j++){
            idh[cnt].x = i;
            idh[cnt].y = j;

            char loc[4];
            loc[0] = 'b';
            loc[1] = '9';
            loc[2] = (char)(i+'0');
            loc[3] = (char)(j+'0');
            
            boardh[i][j] = GTK_WIDGET(gtk_builder_get_object(builder, loc));
            g_signal_connect(boardh[i][j], "clicked", G_CALLBACK(on_b900_clicked), &idh[cnt]);
            cnt++;
        }
    }

    gtk_main();

    return EXIT_SUCCESS;
}


