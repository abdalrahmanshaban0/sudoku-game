void guibuild(){
    //connect with glade
    builder = gtk_builder_new_from_file("gui.glade");
    //table to all callbacks
    gtk_builder_connect_signals(builder, NULL);
}

void run_dialog_callback(GtkWindow* window){
    drules = GTK_WIDGET(gtk_builder_get_object(builder, "drules"));
    gtk_widget_show(drules);
}

void windows(){
    window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));
    window2 = GTK_WIDGET(gtk_builder_get_object(builder, "window2"));
    s6 =  GTK_WIDGET(gtk_builder_get_object(builder, "s6"));   
    s9 =  GTK_WIDGET(gtk_builder_get_object(builder, "s9"));   
    rules = GTK_WIDGET(gtk_builder_get_object(builder, "rules"));
    notvalid = GTK_WIDGET(gtk_builder_get_object(builder, "notvalid"));
    good = GTK_WIDGET(gtk_builder_get_object(builder, "good"));
    g_signal_connect_swapped(rules, "clicked", G_CALLBACK(run_dialog_callback), window);
    gtk_widget_show(window);
}

void destroys(){
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    g_signal_connect(window2, "destroy", G_CALLBACK(gtk_main_quit), NULL);  
    g_signal_connect(s6, "destroy", G_CALLBACK(gtk_main_quit), NULL);  
    g_signal_connect(s9, "destroy", G_CALLBACK(gtk_main_quit), NULL);   
}
