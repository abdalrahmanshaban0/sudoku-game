int su6[6][6], su9[9][9];
bool fxd[10][10];

GtkBuilder* builder;

void on_b00_clicked(GtkButton* b){
    if(fxd[0][0]) return;
    su6[0][0]++; if(su6[0][0] == 7) su6[0][0] = 1;
    char tmp[2]; tmp[0] = (char)(su6[0][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l00")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b01_clicked(GtkButton* b){
    if(fxd[0][1]) return;
    su6[0][1]++; if(su6[0][1] == 7) su6[0][1] = 1;
    char tmp[2]; tmp[0] = (char)(su6[0][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l01")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b02_clicked(GtkButton* b){
    if(fxd[0][2]) return;
    su6[0][2]++; if(su6[0][2] == 7) su6[0][2] = 1;
    char tmp[2]; tmp[0] = (char)(su6[0][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l02")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b03_clicked(GtkButton* b){
    if(fxd[0][3]) return;
    su6[0][3]++; if(su6[0][3] == 7) su6[0][3] = 1;
    char tmp[2]; tmp[0] = (char)(su6[0][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l03")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b04_clicked(GtkButton* b){
    if(fxd[0][4]) return;
    su6[0][4]++; if(su6[0][4] == 7) su6[0][4] = 1;
    char tmp[2]; tmp[0] = (char)(su6[0][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l04")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}


void on_b05_clicked(GtkButton* b){
    if(fxd[0][5]) return;
    su6[0][5]++; if(su6[0][5] == 7) su6[0][5] = 1;
    char tmp[2]; tmp[0] = (char)(su6[0][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l05")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b10_clicked(GtkButton* b){
    if(fxd[1][0]) return;
    su6[1][0]++; if(su6[1][0] == 7) su6[1][0] = 1;
    char tmp[2]; tmp[0] = (char)(su6[1][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l10")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b11_clicked(GtkButton* b){
    if(fxd[1][1]) return;
    su6[1][1]++; if(su6[1][1] == 7) su6[1][1] = 1;
    char tmp[2]; tmp[0] = (char)(su6[1][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l11")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}


void on_b12_clicked(GtkButton* b){
    if(fxd[1][2]) return;
    su6[1][2]++; if(su6[1][2] == 7) su6[1][2] = 1;
    char tmp[2]; tmp[0] = (char)(su6[1][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l12")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b13_clicked(GtkButton* b){
    if(fxd[1][3]) return;
    su6[1][3]++; if(su6[1][3] == 7) su6[1][3] = 1;
    char tmp[2]; tmp[0] = (char)(su6[1][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l13")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b14_clicked(GtkButton* b){
    if(fxd[1][4]) return;
    su6[1][4]++; if(su6[1][4] == 7) su6[1][4] = 1;
    char tmp[2]; tmp[0] = (char)(su6[1][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l14")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b15_clicked(GtkButton* b){
    if(fxd[1][5]) return;
    su6[1][5]++; if(su6[1][5] == 7) su6[1][5] = 1;
    char tmp[2]; tmp[0] = (char)(su6[1][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l15")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b20_clicked(GtkButton* b){
    if(fxd[2][0]) return;
    su6[2][0]++; if(su6[2][0] == 7) su6[2][0] = 1;
    char tmp[2]; tmp[0] = (char)(su6[2][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l20")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b21_clicked(GtkButton* b){
    if(fxd[2][1]) return;
    su6[2][1]++; if(su6[2][1] == 7) su6[2][1] = 1;
    char tmp[2]; tmp[0] = (char)(su6[2][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l21")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b22_clicked(GtkButton* b){
    if(fxd[2][2]) return;
    su6[2][2]++; if(su6[2][2] == 7) su6[2][2] = 1;
    char tmp[2]; tmp[0] = (char)(su6[2][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l22")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b23_clicked(GtkButton* b){
    if(fxd[2][3]) return;
    su6[2][3]++; if(su6[2][3] == 7) su6[2][3] = 1;
    char tmp[2]; tmp[0] = (char)(su6[2][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l23")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b24_clicked(GtkButton* b){
    if(fxd[2][4]) return;
    su6[2][4]++; if(su6[2][4] == 7) su6[2][4] = 1;
    char tmp[2]; tmp[0] = (char)(su6[2][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l24")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b25_clicked(GtkButton* b){
    if(fxd[2][5]) return;
    su6[2][5]++; if(su6[2][5] == 7) su6[2][5] = 1;
    char tmp[2]; tmp[0] = (char)(su6[2][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l25")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b30_clicked(GtkButton* b){
    if(fxd[3][0]) return;
    su6[3][0]++; if(su6[3][0] == 7) su6[3][0] = 1;
    char tmp[2]; tmp[0] = (char)(su6[3][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l30")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b31_clicked(GtkButton* b){
    if(fxd[3][1]) return;
    su6[3][1]++; if(su6[3][1] == 7) su6[3][1] = 1;
    char tmp[2]; tmp[0] = (char)(su6[3][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l31")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b32_clicked(GtkButton* b){
    if(fxd[3][2]) return;
    su6[3][2]++; if(su6[3][2] == 7) su6[3][2] = 1;
    char tmp[2]; tmp[0] = (char)(su6[3][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l32")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}
void on_b33_clicked(GtkButton* b){
    if(fxd[3][3]) return;
    su6[3][3]++; if(su6[3][3] == 7) su6[3][3] = 1;
    char tmp[2]; tmp[0] = (char)(su6[3][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l33")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b34_clicked(GtkButton* b){
    if(fxd[3][4]) return;
    su6[3][4]++; if(su6[3][4] == 7) su6[3][4] = 1;
    char tmp[2]; tmp[0] = (char)(su6[3][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l34")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b35_clicked(GtkButton* b){
    if(fxd[3][5]) return;
    su6[3][5]++; if(su6[3][5] == 7) su6[3][5] = 1;
    char tmp[2]; tmp[0] = (char)(su6[3][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l35")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b40_clicked(GtkButton* b){
    if(fxd[4][0]) return;
    su6[4][0]++; if(su6[4][0] == 7) su6[4][0] = 1;
    char tmp[2]; tmp[0] = (char)(su6[4][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l40")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b41_clicked(GtkButton* b){
    if(fxd[4][1]) return;
    su6[4][1]++; if(su6[4][1] == 7) su6[4][1] = 1;
    char tmp[2]; tmp[0] = (char)(su6[4][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l41")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}
void on_b42_clicked(GtkButton* b){
    if(fxd[4][2]) return;
    su6[4][2]++; if(su6[4][2] == 7) su6[4][2] = 1;
    char tmp[2]; tmp[0] = (char)(su6[4][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l42")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}
void on_b43_clicked(GtkButton* b){
    if(fxd[4][3]) return;
    su6[4][3]++; if(su6[4][3] == 7) su6[4][3] = 1;
    char tmp[2]; tmp[0] = (char)(su6[4][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l43")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}
void on_b44_clicked(GtkButton* b){
    if(fxd[4][4]) return;
    su6[4][4]++; if(su6[4][4] == 7) su6[4][4] = 1;
    char tmp[2]; tmp[0] = (char)(su6[4][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l44")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}
void on_b45_clicked(GtkButton* b){
    if(fxd[4][5]) return;
    su6[4][5]++; if(su6[4][5] == 7) su6[4][5] = 1;
    char tmp[2]; tmp[0] = (char)(su6[4][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l45")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}
void on_b50_clicked(GtkButton* b){
    if(fxd[5][0]) return;
    su6[5][0]++; if(su6[5][0] == 7) su6[5][0] = 1;
    char tmp[2]; tmp[0] = (char)(su6[5][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l50")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}
void on_b51_clicked(GtkButton* b){
    if(fxd[5][1]) return;
    su6[5][1]++; if(su6[5][1] == 7) su6[5][1] = 1;
    char tmp[2]; tmp[0] = (char)(su6[5][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l51")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}
void on_b52_clicked(GtkButton* b){
    if(fxd[5][2]) return;
    su6[5][2]++; if(su6[5][2] == 7) su6[5][2] = 1;
    char tmp[2]; tmp[0] = (char)(su6[5][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l52")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}
void on_b53_clicked(GtkButton* b){
    if(fxd[5][3]) return;
    su6[5][3]++; if(su6[5][3] == 7) su6[5][3] = 1;
    char tmp[2]; tmp[0] = (char)(su6[5][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l53")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}
void on_b54_clicked(GtkButton* b){
    if(fxd[5][4]) return;
    su6[5][4]++; if(su6[5][4] == 7) su6[5][4] = 1;
    char tmp[2]; tmp[0] = (char)(su6[5][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l54")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}
void on_b55_clicked(GtkButton* b){
    if(fxd[5][5]) return;
    su6[5][5]++; if(su6[5][5] == 7) su6[5][5] = 1;
    char tmp[2]; tmp[0] = (char)(su6[5][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l55")); 
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

//////////////////////////


void on_b900_clicked(GtkButton* b){
    if(fxd[0][0]) return;
    su9[0][0]++; if(su9[0][0] == 10) su9[0][0] = 1;
    char tmp[2]; tmp[0] = (char)(su9[0][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l900"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b901_clicked(GtkButton* b){
    if(fxd[0][1]) return;
    su9[0][1]++; if(su9[0][1] == 10) su9[0][1] = 1;
    char tmp[2]; tmp[0] = (char)(su9[0][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l901"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b902_clicked(GtkButton* b){
    if(fxd[0][2]) return;
    su9[0][2]++; if(su9[0][2] == 10) su9[0][2] = 1;
    char tmp[2]; tmp[0] = (char)(su9[0][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l902"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b903_clicked(GtkButton* b){
    if(fxd[0][3]) return;
    su9[0][3]++; if(su9[0][3] == 10) su9[0][3] = 1;
    char tmp[2]; tmp[0] = (char)(su9[0][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l903"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b904_clicked(GtkButton* b){
    if(fxd[0][4]) return;
    su9[0][4]++; if(su9[0][4] == 10) su9[0][4] = 1;
    char tmp[2]; tmp[0] = (char)(su9[0][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l904"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b905_clicked(GtkButton* b){
    if(fxd[0][5]) return;
    su9[0][5]++; if(su9[0][5] == 10) su9[0][5] = 1;
    char tmp[2]; tmp[0] = (char)(su9[0][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l905"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b906_clicked(GtkButton* b){
    if(fxd[0][6]) return;
    su9[0][6]++; if(su9[0][6] == 10) su9[0][6] = 1;
    char tmp[2]; tmp[0] = (char)(su9[0][6] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l906"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b907_clicked(GtkButton* b){
    if(fxd[0][7]) return;
    su9[0][7]++; if(su9[0][7] == 10) su9[0][7] = 1;
    char tmp[2]; tmp[0] = (char)(su9[0][7] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l907"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b908_clicked(GtkButton* b){
    if(fxd[0][8]) return;
    su9[0][8]++; if(su9[0][8] == 10) su9[0][8] = 1;
    char tmp[2]; tmp[0] = (char)(su9[0][8] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l908"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b910_clicked(GtkButton* b){
    if(fxd[1][0]) return;
    su9[1][0]++; if(su9[1][0] == 10) su9[1][0] = 1;
    char tmp[2]; tmp[0] = (char)(su9[1][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l910"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b911_clicked(GtkButton* b){
    if(fxd[1][1]) return;
    su9[1][1]++; if(su9[1][1] == 10) su9[1][1] = 1;
    char tmp[2]; tmp[0] = (char)(su9[1][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l911"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b912_clicked(GtkButton* b){
    if(fxd[1][2]) return;
    su9[1][2]++; if(su9[1][2] == 10) su9[1][2] = 1;
    char tmp[2]; tmp[0] = (char)(su9[1][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l912"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b913_clicked(GtkButton* b){
    if(fxd[1][3]) return;
    su9[1][3]++; if(su9[1][3] == 10) su9[1][3] = 1;
    char tmp[2]; tmp[0] = (char)(su9[1][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l913"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b914_clicked(GtkButton* b){
    if(fxd[1][4]) return;
    su9[1][4]++; if(su9[1][4] == 10) su9[1][4] = 1;
    char tmp[2]; tmp[0] = (char)(su9[1][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l914"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b915_clicked(GtkButton* b){
    if(fxd[1][5]) return;
    su9[1][5]++; if(su9[1][5] == 10) su9[1][5] = 1;
    char tmp[2]; tmp[0] = (char)(su9[1][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l915"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b916_clicked(GtkButton* b){
    if(fxd[1][6]) return;
    su9[1][6]++; if(su9[1][6] == 10) su9[1][6] = 1;
    char tmp[2]; tmp[0] = (char)(su9[1][6] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l916"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b917_clicked(GtkButton* b){
    if(fxd[1][7]) return;
    su9[1][7]++; if(su9[1][7] == 10) su9[1][7] = 1;
    char tmp[2]; tmp[0] = (char)(su9[1][7] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l917"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b918_clicked(GtkButton* b){
    if(fxd[1][8]) return;
    su9[1][8]++; if(su9[1][8] == 10) su9[1][8] = 1;
    char tmp[2]; tmp[0] = (char)(su9[1][8] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l918"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b920_clicked(GtkButton* b){
    if(fxd[2][0]) return;
    su9[2][0]++; if(su9[2][0] == 10) su9[2][0] = 1;
    char tmp[2]; tmp[0] = (char)(su9[2][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l920"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b921_clicked(GtkButton* b){
    if(fxd[2][1]) return;
    su9[2][1]++; if(su9[2][1] == 10) su9[2][1] = 1;
    char tmp[2]; tmp[0] = (char)(su9[2][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l921"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b922_clicked(GtkButton* b){
    if(fxd[2][2]) return;
    su9[2][2]++; if(su9[2][2] == 10) su9[2][2] = 1;
    char tmp[2]; tmp[0] = (char)(su9[2][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l922"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b923_clicked(GtkButton* b){
    if(fxd[2][3]) return;
    su9[2][3]++; if(su9[2][3] == 10) su9[2][3] = 1;
    char tmp[2]; tmp[0] = (char)(su9[2][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l923"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b924_clicked(GtkButton* b){
    if(fxd[2][4]) return;
    su9[2][4]++; if(su9[2][4] == 10) su9[2][4] = 1;
    char tmp[2]; tmp[0] = (char)(su9[2][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l924"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b925_clicked(GtkButton* b){
    if(fxd[2][5]) return;
    su9[2][5]++; if(su9[2][5] == 10) su9[2][5] = 1;
    char tmp[2]; tmp[0] = (char)(su9[2][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l925"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b926_clicked(GtkButton* b){
    if(fxd[2][6]) return;
    su9[2][6]++; if(su9[2][6] == 10) su9[2][6] = 1;
    char tmp[2]; tmp[0] = (char)(su9[2][6] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l926"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b927_clicked(GtkButton* b){
    if(fxd[2][7]) return;
    su9[2][7]++; if(su9[2][7] == 10) su9[2][7] = 1;
    char tmp[2]; tmp[0] = (char)(su9[2][7] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l927"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b928_clicked(GtkButton* b){
    if(fxd[2][8]) return;
    su9[2][8]++; if(su9[2][8] == 10) su9[2][8] = 1;
    char tmp[2]; tmp[0] = (char)(su9[2][8] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l928"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b930_clicked(GtkButton* b){
    if(fxd[3][0]) return;
    su9[3][0]++; if(su9[3][0] == 10) su9[3][0] = 1;
    char tmp[2]; tmp[0] = (char)(su9[3][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l930"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b931_clicked(GtkButton* b){
    if(fxd[3][1]) return;
    su9[3][1]++; if(su9[3][1] == 10) su9[3][1] = 1;
    char tmp[2]; tmp[0] = (char)(su9[3][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l931"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b932_clicked(GtkButton* b){
    if(fxd[3][2]) return;
    su9[3][2]++; if(su9[3][2] == 10) su9[3][2] = 1;
    char tmp[2]; tmp[0] = (char)(su9[3][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l932"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b933_clicked(GtkButton* b){
    if(fxd[3][3]) return;
    su9[3][3]++; if(su9[3][3] == 10) su9[3][3] = 1;
    char tmp[2]; tmp[0] = (char)(su9[3][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l933"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b934_clicked(GtkButton* b){
    if(fxd[3][4]) return;
    su9[3][4]++; if(su9[3][4] == 10) su9[3][4] = 1;
    char tmp[2]; tmp[0] = (char)(su9[3][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l934"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b935_clicked(GtkButton* b){
    if(fxd[3][5]) return;
    su9[3][5]++; if(su9[3][5] == 10) su9[3][5] = 1;
    char tmp[2]; tmp[0] = (char)(su9[3][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l935"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b936_clicked(GtkButton* b){
    if(fxd[3][6]) return;
    su9[3][6]++; if(su9[3][6] == 10) su9[3][6] = 1;
    char tmp[2]; tmp[0] = (char)(su9[3][6] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l936"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b937_clicked(GtkButton* b){
    if(fxd[3][7]) return;
    su9[3][7]++; if(su9[3][7] == 10) su9[3][7] = 1;
    char tmp[2]; tmp[0] = (char)(su9[3][7] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l937"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b938_clicked(GtkButton* b){
    if(fxd[3][8]) return;
    su9[3][8]++; if(su9[3][8] == 10) su9[3][8] = 1;
    char tmp[2]; tmp[0] = (char)(su9[3][8] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l938"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b940_clicked(GtkButton* b){
    if(fxd[4][0]) return;
    su9[4][0]++; if(su9[4][0] == 10) su9[4][0] = 1;
    char tmp[2]; tmp[0] = (char)(su9[4][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l940"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b941_clicked(GtkButton* b){
    if(fxd[4][1]) return;
    su9[4][1]++; if(su9[4][1] == 10) su9[4][1] = 1;
    char tmp[2]; tmp[0] = (char)(su9[4][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l941"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b942_clicked(GtkButton* b){
    if(fxd[4][2]) return;
    su9[4][2]++; if(su9[4][2] == 10) su9[4][2] = 1;
    char tmp[2]; tmp[0] = (char)(su9[4][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l942"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b943_clicked(GtkButton* b){
    if(fxd[4][3]) return;
    su9[4][3]++; if(su9[4][3] == 10) su9[4][3] = 1;
    char tmp[2]; tmp[0] = (char)(su9[4][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l943"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b944_clicked(GtkButton* b){
    if(fxd[4][4]) return;
    su9[4][4]++; if(su9[4][4] == 10) su9[4][4] = 1;
    char tmp[2]; tmp[0] = (char)(su9[4][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l944"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b945_clicked(GtkButton* b){
    if(fxd[4][5]) return;
    su9[4][5]++; if(su9[4][5] == 10) su9[4][5] = 1;
    char tmp[2]; tmp[0] = (char)(su9[4][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l945"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b946_clicked(GtkButton* b){
    if(fxd[4][6]) return;
    su9[4][6]++; if(su9[4][6] == 10) su9[4][6] = 1;
    char tmp[2]; tmp[0] = (char)(su9[4][6] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l946"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b947_clicked(GtkButton* b){
    if(fxd[4][7]) return;
    su9[4][7]++; if(su9[4][7] == 10) su9[4][7] = 1;
    char tmp[2]; tmp[0] = (char)(su9[4][7] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l947"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b948_clicked(GtkButton* b){
    if(fxd[4][8]) return;
    su9[4][8]++; if(su9[4][8] == 10) su9[4][8] = 1;
    char tmp[2]; tmp[0] = (char)(su9[4][8] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l948"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b950_clicked(GtkButton* b){
    if(fxd[5][0]) return;
    su9[5][0]++; if(su9[5][0] == 10) su9[5][0] = 1;
    char tmp[2]; tmp[0] = (char)(su9[5][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l950"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b951_clicked(GtkButton* b){
    if(fxd[5][1]) return;
    su9[5][1]++; if(su9[5][1] == 10) su9[5][1] = 1;
    char tmp[2]; tmp[0] = (char)(su9[5][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l951"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b952_clicked(GtkButton* b){
    if(fxd[5][2]) return;
    su9[5][2]++; if(su9[5][2] == 10) su9[5][2] = 1;
    char tmp[2]; tmp[0] = (char)(su9[5][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l952"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b953_clicked(GtkButton* b){
    if(fxd[5][3]) return;
    su9[5][3]++; if(su9[5][3] == 10) su9[5][3] = 1;
    char tmp[2]; tmp[0] = (char)(su9[5][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l953"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b954_clicked(GtkButton* b){
    if(fxd[5][4]) return;
    su9[5][4]++; if(su9[5][4] == 10) su9[5][4] = 1;
    char tmp[2]; tmp[0] = (char)(su9[5][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l954"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b955_clicked(GtkButton* b){
    if(fxd[5][5]) return;
    su9[5][5]++; if(su9[5][5] == 10) su9[5][5] = 1;
    char tmp[2]; tmp[0] = (char)(su9[5][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l955"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b956_clicked(GtkButton* b){
    if(fxd[5][6]) return;
    su9[5][6]++; if(su9[5][6] == 10) su9[5][6] = 1;
    char tmp[2]; tmp[0] = (char)(su9[5][6] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l956"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b957_clicked(GtkButton* b){
    if(fxd[5][7]) return;
    su9[5][7]++; if(su9[5][7] == 10) su9[5][7] = 1;
    char tmp[2]; tmp[0] = (char)(su9[5][7] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l957"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b958_clicked(GtkButton* b){
    if(fxd[5][8]) return;
    su9[5][8]++; if(su9[5][8] == 10) su9[5][8] = 1;
    char tmp[2]; tmp[0] = (char)(su9[5][8] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l958"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b960_clicked(GtkButton* b){
    if(fxd[6][0]) return;
    su9[6][0]++; if(su9[6][0] == 10) su9[6][0] = 1;
    char tmp[2]; tmp[0] = (char)(su9[6][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l960"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b961_clicked(GtkButton* b){
    if(fxd[6][1]) return;
    su9[6][1]++; if(su9[6][1] == 10) su9[6][1] = 1;
    char tmp[2]; tmp[0] = (char)(su9[6][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l961"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b962_clicked(GtkButton* b){
    if(fxd[6][2]) return;
    su9[6][2]++; if(su9[6][2] == 10) su9[6][2] = 1;
    char tmp[2]; tmp[0] = (char)(su9[6][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l962"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b963_clicked(GtkButton* b){
    if(fxd[6][3]) return;
    su9[6][3]++; if(su9[6][3] == 10) su9[6][3] = 1;
    char tmp[2]; tmp[0] = (char)(su9[6][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l963"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b964_clicked(GtkButton* b){
    if(fxd[6][4]) return;
    su9[6][4]++; if(su9[6][4] == 10) su9[6][4] = 1;
    char tmp[2]; tmp[0] = (char)(su9[6][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l964"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b965_clicked(GtkButton* b){
    if(fxd[6][5]) return;
    su9[6][5]++; if(su9[6][5] == 10) su9[6][5] = 1;
    char tmp[2]; tmp[0] = (char)(su9[6][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l965"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b966_clicked(GtkButton* b){
    if(fxd[6][6]) return;
    su9[6][6]++; if(su9[6][6] == 10) su9[6][6] = 1;
    char tmp[2]; tmp[0] = (char)(su9[6][6] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l966"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b967_clicked(GtkButton* b){
    if(fxd[6][7]) return;
    su9[6][7]++; if(su9[6][7] == 10) su9[6][7] = 1;
    char tmp[2]; tmp[0] = (char)(su9[6][7] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l967"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b968_clicked(GtkButton* b){
    if(fxd[6][8]) return;
    su9[6][8]++; if(su9[6][8] == 10) su9[6][8] = 1;
    char tmp[2]; tmp[0] = (char)(su9[6][8] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l968"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b970_clicked(GtkButton* b){
    if(fxd[7][0]) return;
    su9[7][0]++; if(su9[7][0] == 10) su9[7][0] = 1;
    char tmp[2]; tmp[0] = (char)(su9[7][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l970"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b971_clicked(GtkButton* b){
    if(fxd[7][1]) return;
    su9[7][1]++; if(su9[7][1] == 10) su9[7][1] = 1;
    char tmp[2]; tmp[0] = (char)(su9[7][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l971"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b972_clicked(GtkButton* b){
    if(fxd[7][2]) return;
    su9[7][2]++; if(su9[7][2] == 10) su9[7][2] = 1;
    char tmp[2]; tmp[0] = (char)(su9[7][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l972"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b973_clicked(GtkButton* b){
    if(fxd[7][3]) return;
    su9[7][3]++; if(su9[7][3] == 10) su9[7][3] = 1;
    char tmp[2]; tmp[0] = (char)(su9[7][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l973"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b974_clicked(GtkButton* b){
    if(fxd[7][4]) return;
    su9[7][4]++; if(su9[7][4] == 10) su9[7][4] = 1;
    char tmp[2]; tmp[0] = (char)(su9[7][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l974"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b975_clicked(GtkButton* b){
    if(fxd[7][5]) return;
    su9[7][5]++; if(su9[7][5] == 10) su9[7][5] = 1;
    char tmp[2]; tmp[0] = (char)(su9[7][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l975"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b976_clicked(GtkButton* b){
    if(fxd[7][6]) return;
    su9[7][6]++; if(su9[7][6] == 10) su9[7][6] = 1;
    char tmp[2]; tmp[0] = (char)(su9[7][6] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l976"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b977_clicked(GtkButton* b){
    if(fxd[7][7]) return;
    su9[7][7]++; if(su9[7][7] == 10) su9[7][7] = 1;
    char tmp[2]; tmp[0] = (char)(su9[7][7] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l977"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b978_clicked(GtkButton* b){
    if(fxd[7][8]) return;
    su9[7][8]++; if(su9[7][8] == 10) su9[7][8] = 1;
    char tmp[2]; tmp[0] = (char)(su9[7][8] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l978"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b980_clicked(GtkButton* b){
    if(fxd[8][0]) return;
    su9[8][0]++; if(su9[8][0] == 10) su9[8][0] = 1;
    char tmp[2]; tmp[0] = (char)(su9[8][0] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l980"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b981_clicked(GtkButton* b){
    if(fxd[8][1]) return;
    su9[8][1]++; if(su9[8][1] == 10) su9[8][1] = 1;
    char tmp[2]; tmp[0] = (char)(su9[8][1] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l981"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b982_clicked(GtkButton* b){
    if(fxd[8][2]) return;
    su9[8][2]++; if(su9[8][2] == 10) su9[8][2] = 1;
    char tmp[2]; tmp[0] = (char)(su9[8][2] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l982"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b983_clicked(GtkButton* b){
    if(fxd[8][3]) return;
    su9[8][3]++; if(su9[8][3] == 10) su9[8][3] = 1;
    char tmp[2]; tmp[0] = (char)(su9[8][3] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l983"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b984_clicked(GtkButton* b){
    if(fxd[8][4]) return;
    su9[8][4]++; if(su9[8][4] == 10) su9[8][4] = 1;
    char tmp[2]; tmp[0] = (char)(su9[8][4] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l984"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b985_clicked(GtkButton* b){
    if(fxd[8][5]) return;
    su9[8][5]++; if(su9[8][5] == 10) su9[8][5] = 1;
    char tmp[2]; tmp[0] = (char)(su9[8][5] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l985"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b986_clicked(GtkButton* b){
    if(fxd[8][6]) return;
    su9[8][6]++; if(su9[8][6] == 10) su9[8][6] = 1;
    char tmp[2]; tmp[0] = (char)(su9[8][6] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l986"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b987_clicked(GtkButton* b){
    if(fxd[8][7]) return;
    su9[8][7]++; if(su9[8][7] == 10) su9[8][7] = 1;
    char tmp[2]; tmp[0] = (char)(su9[8][7] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l987"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}

void on_b988_clicked(GtkButton* b){
    if(fxd[8][8]) return;
    su9[8][8]++; if(su9[8][8] == 10) su9[8][8] = 1;
    char tmp[2]; tmp[0] = (char)(su9[8][8] + '0'); tmp[1] = '\0';
    GtkWidget* l = GTK_WIDGET(gtk_builder_get_object(builder, "l988"));
    gtk_label_set_text(GTK_LABEL(l), tmp);
}


