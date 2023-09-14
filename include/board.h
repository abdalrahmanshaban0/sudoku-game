int su6[6][6], su9[9][9];
bool fxd[10][10];

GtkBuilder* builder;

static void on_b00_clicked(GtkButton* b, gpointer data){
    (void)b;
    btn* id = data;
    int i = id->x;
    int j = id->y;

    if(fxd[i][j]) return;
    
    su6[i][j]++; if(su6[i][j] == 7) su6[i][j] = 1;
    char tmp[2]; tmp[0] = (char)(su6[i][j] + '0'); tmp[1] = '\0';

    char loc[3];
    loc[0] = 'l';
    loc[1] = (char)(i+'0');
    loc[2] = (char)(j+'0');

    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, loc)); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}


static void on_b900_clicked(GtkButton* b, gpointer data){
    (void)b;
    btn* id = data;
    int i = id->x;
    int j = id->y;

    if(fxd[i][j]) return;
    
    su9[i][j]++; if(su9[i][j] == 10) su9[i][j] = 1;
    char tmp[2]; tmp[0] = (char)(su9[i][j] + '0'); tmp[1] = '\0';

    char loc[4];
    loc[0] = 'l';
    loc[1] = '9';
    loc[2] = (char)(i+'0');
    loc[3] = (char)(j+'0');

    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, loc)); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

