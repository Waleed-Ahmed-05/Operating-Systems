#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
    GtkWidget *window;
    GtkWidget *overlay;
    GtkWidget *image;
    GtkWidget *content;

    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "GTK Background Image Demo");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    overlay = gtk_overlay_new();
    gtk_container_add(GTK_CONTAINER(window), overlay);

    image = gtk_image_new_from_file("Arleccino.png");
    gtk_overlay_add_overlay(GTK_OVERLAY(overlay), image);

    content = gtk_label_new("This is the main content");
    gtk_widget_set_can_default(content, FALSE); // Set can-target property to FALSE
    gtk_overlay_add_overlay(GTK_OVERLAY(overlay), content);

    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}

