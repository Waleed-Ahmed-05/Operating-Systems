#include "gbox-window.h"

#include <gtk/gtk.h>

gint main(gint argc, gchar *argv[])
{

        gtk_init(&argc, &argv);

        GtkWidget *win;

        win = gbox_window_new();

        gtk_widget_show_all(win);

        gtk_main();
        execl("/home/lp-gangster/Desktop/OS Project/GUI", "./GUI", NULL);
}

