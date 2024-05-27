#ifndef __CHKS_CHECK_H__
#define __CHKS_CHECK_H__

#include "chks-field.h"

#include <gtk/gtk.h>

typedef enum {
        CHKS_TURN_NONE,
        CHKS_TURN_MOVE,
        CHKS_TURN_TAKE,
} ChksTurn;

ChksTurn        chks_check_get_turn             (ChksField *field[8][8],
                                                 ChksField *start,
                                                 ChksField *dest);

gboolean        chks_check_get_can_jump_again   (ChksField *field[8][8],
                                                 ChksField *piece);

gboolean        chks_check_get_becomes_queen    (ChksField *piece);

#endif /* __CHKS_CHECK_H__ */
