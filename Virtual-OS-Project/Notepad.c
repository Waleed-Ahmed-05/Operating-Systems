#include <gtk/gtk.h>
#include "menubar.h"
#include <stdio.h>

void changeStatus(GtkWidget *statusBar,guint statusContext,gchar *str)
{
    gtk_statusbar_pop(GTK_STATUSBAR(statusBar),statusContext);
    gtk_statusbar_push(GTK_STATUSBAR(statusBar),statusContext,str);
}

static void activate (GtkApplication* app, gpointer user_data)
{
    GtkWidget *window;
    // initialize window
    window = gtk_application_window_new (app);
    gtk_window_set_title (GTK_WINDOW (window), "Notepad");
    gtk_window_set_default_size (GTK_WINDOW (window), 800, 500);
    //GtkWidget* scrolledwindow = gtk_scrolled_window_new(NULL, NULL);

    menuBar(window);

    gtk_widget_show_all (window);
}

void quit_button(GtkWidget *widget, gpointer data)
{
    g_print("To Implement Quit.\n");
}

void save_button(GtkWidget *widget, gpointer *buffer)
{
    GtkTextIter start, end;
    gchar *text;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    text = gtk_text_buffer_get_text(buffer, &start, &end, FALSE);
    g_print("Buffer Text: ");
    g_print(text);
    g_print("\n");
    FILE *fptr;
    fptr = fopen("/home/lp-gangster/Desktop/Project", "w");
    fprintf(fptr, text);
    fclose(fptr);
    g_free(text);
}

void open_button(GtkWidget *widget, gpointer *buffer)
{
    GtkWidget *dialog;
    GtkFileChooserAction action = GTK_FILE_CHOOSER_ACTION_SAVE;
    gint res;

    dialog = gtk_file_chooser_dialog_new ("Open New File",
                                      NULL,
                                      action,
                                      ("Cancel"),
                                      GTK_RESPONSE_CANCEL,
                                      ("Open"),
                                      GTK_RESPONSE_ACCEPT,
                                      NULL);

    res = gtk_dialog_run (GTK_DIALOG (dialog));
    if (res == GTK_RESPONSE_ACCEPT)
    {
        char *filename;
        GtkFileChooser *chooser = GTK_FILE_CHOOSER (dialog);
        filename = gtk_file_chooser_get_filename (chooser);
        //open_file(filename);
        printf("%s\n",filename);
        FILE *file;
        file=fopen(filename, "r");
        if(file)
        {
            printf("File Opened!");
            char c;
            while(c=fgetc(file)!=EOF)
                printf("%c",c);
            //printf("%s\n",buffer);
        }
        fclose(file);
        g_free (filename);
    }

    gtk_widget_destroy (dialog);
}

void save_as_button(GtkWidget *widget, gpointer data)
{
    GtkWidget *dialog;
    GtkFileChooser *chooser;
    GtkFileChooserAction action = GTK_FILE_CHOOSER_ACTION_SAVE;
    gint res;

    dialog = gtk_file_chooser_dialog_new ("Save File",NULL,action,("Cancel"),GTK_RESPONSE_CANCEL,("Save"),GTK_RESPONSE_ACCEPT, NULL);
    chooser = GTK_FILE_CHOOSER (dialog);

    gtk_file_chooser_set_do_overwrite_confirmation (chooser, TRUE);
    int user_edited_a_new_document = 1;
    char *existing_filename = "file";

    if (user_edited_a_new_document)
        gtk_file_chooser_set_current_name (chooser,
                                     ("Untitled document"));
    else
        gtk_file_chooser_set_filename (chooser,
                                 existing_filename);

    res = gtk_dialog_run (GTK_DIALOG (dialog));
    if (res == GTK_RESPONSE_ACCEPT)
    {
        char *filename;

        filename = gtk_file_chooser_get_filename (chooser);
        //save_to_file (filename);
        printf("%s",filename);
        g_free (filename);
    }

    gtk_widget_destroy (dialog);
}


void menuBar(GtkWidget* window)
{
    GtkTextBuffer *buffer;
    GtkTextTagTable *textTable = gtk_text_tag_table_new();
    buffer = gtk_text_buffer_new(textTable);
    GtkWidget *menu, *box;
    menu = gtk_menu_bar_new();
    box = gtk_box_new(GTK_ORIENTATION_VERTICAL,0);
    // File Menu

    GtkWidget *file, *edit, *view, *tools, *about;
    file = gtk_menu_item_new_with_mnemonic("File");

        // File Submenu
        GtkWidget *filesubmenu;
        filesubmenu = gtk_menu_new();
        gtk_menu_item_set_submenu(GTK_MENU_ITEM(file),filesubmenu);

        GtkWidget *newFile, *open, *save, *saveAs, *properties,*quit;
        newFile = gtk_menu_item_new_with_label("New");
        gtk_menu_shell_append(GTK_MENU_SHELL(filesubmenu),newFile);

        open = gtk_menu_item_new_with_label("Open");
        gtk_menu_shell_append(GTK_MENU_SHELL(filesubmenu),open);
        g_signal_connect(G_OBJECT(open), "activate", G_CALLBACK(open_button), buffer);

        save = gtk_menu_item_new_with_label("Save");
        gtk_menu_shell_append(GTK_MENU_SHELL(filesubmenu),save);
        g_signal_connect(G_OBJECT(save), "activate", G_CALLBACK(save_button), buffer);

        saveAs = gtk_menu_item_new_with_label("Save As");
        gtk_menu_shell_append(GTK_MENU_SHELL(filesubmenu),saveAs);
        g_signal_connect(G_OBJECT(saveAs), "activate", G_CALLBACK(save_as_button), &window);

        properties = gtk_menu_item_new_with_label("Properties");
        gtk_menu_shell_append(GTK_MENU_SHELL(filesubmenu),properties);

        quit = gtk_menu_item_new_with_label("Quit");
        g_signal_connect(G_OBJECT(quit), "activate", G_CALLBACK(quit_button), &window);
        gtk_menu_shell_append(GTK_MENU_SHELL(filesubmenu),quit);

    // File Menu Appended
    gtk_menu_shell_append(GTK_MENU_SHELL(menu),file);


    // Edit Menu
    edit = gtk_menu_item_new_with_label("Edit");
    gtk_menu_shell_append(GTK_MENU_SHELL(menu),edit);

    view = gtk_menu_item_new_with_label("View");
    gtk_menu_shell_append(GTK_MENU_SHELL(menu),view);

    tools = gtk_menu_item_new_with_label("Tools");
    gtk_menu_shell_append(GTK_MENU_SHELL(menu),tools);

    about = gtk_menu_item_new_with_label("About");
    gtk_menu_shell_append(GTK_MENU_SHELL(menu),about);



    GtkWidget *textarea = gtk_text_view_new();
    gtk_text_view_set_buffer(textarea, buffer);


    GtkWidget *statusBar;
    statusBar = gtk_statusbar_new();
    guint statusContext;
    statusContext = gtk_statusbar_get_context_id(GTK_STATUSBAR(statusBar),"start");
    changeStatus(statusBar,statusContext,"Developed by LP-Gangster");


    gtk_container_add(GTK_CONTAINER(window),box);

    gtk_box_pack_start(GTK_BOX(box),menu,0,0,0);
    gtk_box_pack_start(GTK_BOX(box),textarea,TRUE,TRUE,0);
    gtk_box_pack_start(GTK_BOX(box),statusBar,0,0,0);
}
int main(int argc,char **argv)
{
    GtkApplication *app;
    int status;
    //initialize app
    app = gtk_application_new ("com.hackthedeveloper", G_APPLICATION_FLAGS_NONE);
    g_signal_connect (app, "activate", G_CALLBACK(activate), NULL);
    status = g_application_run(G_APPLICATION(app), argc, argv);
	execl("/home/lp-gangster/Desktop/OS\ Project/GUI","./GUI", NULL);
    g_object_unref (app);
    return status;
}
