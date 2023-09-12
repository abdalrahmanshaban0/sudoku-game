#include <stdio.h>
#include <gtk/gtk.h>
#include "callback_functions.h"
#include "gtk_stuff.h"

int main (int argc, char **argv){
    gtk_init(&argc, &argv);
    guibuild();
    windows();
    destroys();
    gtk_main();

    return EXIT_SUCCESS;
}


