#ifndef __MILL_VIEW_H__
#define __MILL_VIEW_H__

#include <gtk/gtk.h>

typedef struct _MillView MillView;

void             mill_view_reset                (MillView *view);

GtkWidget       *mill_view_get_viewport         (MillView *view);

void             mill_view_set_header_bar       (MillView *view,
                                                 GtkWidget *hbar);

MillView        *mill_view_new                  (void);

#endif /* __MILL_VIEW_H__ */
