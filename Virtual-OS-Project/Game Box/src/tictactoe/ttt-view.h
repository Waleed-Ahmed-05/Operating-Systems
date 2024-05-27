#ifndef __TTT_VIEW_H__
#define __TTT_VIEW_H__

#include <gtk/gtk.h>

typedef struct _TttView TttView;

void             ttt_view_reset                 (TttView *view);

GtkWidget       *ttt_view_get_viewport          (TttView *view);

void             ttt_view_set_header_bar        (TttView *view,
                                                 GtkWidget *hbar);

TttView         *ttt_view_new                   (void);

#endif /* __TTT_VIEW_H__ */
