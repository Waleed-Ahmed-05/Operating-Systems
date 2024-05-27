#ifndef __CF_VIEW_H__
#define __CF_VIEW_H__

#include "cf-view.h"

#include <gtk/gtk.h>

typedef struct _CfView CfView;

void             cf_view_reset                  (CfView *view);

GtkWidget       *cf_view_get_viewport           (CfView *view);

void             cf_view_set_header_bar         (CfView *view,
                                                 GtkWidget *hbar);

CfView          *cf_view_new                    (void);

#endif /* __CF_VIEW_H__ */
