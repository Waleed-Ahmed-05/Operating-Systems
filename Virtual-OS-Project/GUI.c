#include <gtk/gtk.h>
#include <unistd.h>
#include <stdio.h>

void BFN_01(GtkWidget* widget, gpointer data)
{
	execl("/home/lp-gangster/Desktop/OS\ Project/Calculator","./Calculator", NULL);
}

void BFN_02(GtkWidget* widget, gpointer data)
{
	execl("/home/lp-gangster/Desktop/OS\ Project/Notepad","./Notepad", NULL);
}

void BFN_03(GtkWidget* widget, gpointer data)
{
	execl("/home/lp-gangster/Desktop/OS\ Project/Minesweeper","./Minesweeper", NULL);
}

void BFN_04(GtkWidget* widget, gpointer data)
{
	execl("/home/lp-gangster/Desktop/OS\ Project/Clock","./Clock", NULL);
}

void BFN_05(GtkWidget* widget, gpointer data)
{
	execl("/home/lp-gangster/Desktop/OS\ Project/Game\ Box/gamebox","./gamebox", NULL);
}

int main(int argc, char *argv[]) 
{
    // Initializing Main Window Widget
    
    GtkWidget *Window, *Fixed, *Image, *Overlay, *Button_01, *Button_02, *Button_03, *Button_04, *Button_05;
    
    gtk_init(&argc, &argv);
    
    // Setting Main Window Proiority and Default Sizes & Positions
    
    Window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    
    gtk_window_set_default_size(GTK_WINDOW(Window), 700, 400);
    
    Fixed = gtk_fixed_new();
    
    Button_01 = gtk_button_new_with_label("Calculator");
    
    Button_02 = gtk_button_new_with_label("Notepad");
    
    Button_03 = gtk_button_new_with_label("Minesweeper");
    
    Button_04 = gtk_button_new_with_label("Clock");
    
    Button_05 = gtk_button_new_with_label("Game Box");
    
    gtk_fixed_put(GTK_FIXED(Fixed), Button_01,25,25);
    
    gtk_fixed_put(GTK_FIXED(Fixed), Button_02,25,65);
    
    gtk_fixed_put(GTK_FIXED(Fixed), Button_03,25,105);
    
    gtk_fixed_put(GTK_FIXED(Fixed), Button_04,25,145);
    
    gtk_fixed_put(GTK_FIXED(Fixed), Button_05,25,185);
    
    // Creating a GTK Container to Add More GUI Elements
    
    gtk_container_add(GTK_CONTAINER(Window),Fixed);
    
    // Naming Title of Main Window
    
    gtk_window_set_title(GTK_WINDOW(Window), "Welcome to Gangster's Paradise");
    
    
    // Setting Background of Main Window via Arlecchino.png
    //Overlay = gtk_overlay_new();
    //gtk_container_add(GTK_CONTAINER(Window), Overlay);
    //Image = gtk_image_new_from_file("Arleccino.png");
    //gtk_overlay_add_overlay(GTK_OVERLAY(Overlay), Image);
    
    // Setting the Location of Main Window
    
    gtk_window_set_position(GTK_WINDOW(Window), GTK_WIN_POS_CENTER);
    
    // Disabling Main Windows Resizeablility
    
    gtk_window_set_resizable(GTK_WINDOW(Window), FALSE);
    
    // Disabling Main Windows Control Boxes & Adding Decorative View
    
    gtk_window_set_decorated(GTK_WINDOW(Window), TRUE);
    
    // Enabling Buttons on Main Window
    
    g_signal_connect(Window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    
    g_signal_connect(Button_01,"clicked",G_CALLBACK(BFN_01),NULL);
    
    g_signal_connect(Button_02,"clicked",G_CALLBACK(BFN_02),NULL);
    
    g_signal_connect(Button_03,"clicked",G_CALLBACK(BFN_03),NULL);
    
    g_signal_connect(Button_04,"clicked",G_CALLBACK(BFN_04),NULL);
    
    g_signal_connect(Button_05,"clicked",G_CALLBACK(BFN_05),NULL);
    
	// Displaying Main Window as GUI
    
    gtk_widget_show_all(Window);
    
    // Executing "int main()" unless EXIT is Triggered
    
    gtk_main();

    return 0;
}
