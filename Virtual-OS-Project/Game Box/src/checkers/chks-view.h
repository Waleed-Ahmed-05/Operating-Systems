#ifndef __CHKS_VIEW_H__
#define __CHKS_VIEW_H__

#include <gtk/gtk.h>

typedef struct _ChksView ChksView;

void             chks_view_reset                (ChksView *view);

GtkWidget       *chks_view_get_viewport         (ChksView *view);

void             chks_view_set_header_bar       (ChksView *view,
                                                 GtkWidget *hbar);

ChksView        *chks_view_new                  (void);

#endif /* __CHKS_VIEW_H__ */
