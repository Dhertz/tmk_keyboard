/*
 * Dan's HHKB JP Layout
 */
#include "keymap_common.h"

#define KEYMAP_DAN KEYMAP_JP

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Del|Bsp|
     * |-----------------------------------------------------------|
     * |Tab |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Enter |
     * |------------------------------------------------------`    |
     * |Fn5   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  \|    |
     * |-----------------------------------------------------------|
     * |Shift  |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|  `|Up |Shi|
     * |-----------------------------------------------------------|
     * |Fn2||  #|Gui|Alt|Fn6|   Fn0   |Fn7|Fn8|Gui|Fn3||Rig|Dow|Lef|
     * `-----------------------------------------------------------'
     */
    KEYMAP_DAN(ESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL, DEL,BSPC, \
              TAB    ,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,        \
              FN5     ,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,NUHS, ENT , \
              LSFT     ,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH, GRV,  UP,RSFT, \
              FN2 ,  FN1,LALT,FN6, FN6,     FN0     , FN7, FN8,RGUI, FN3, LEFT,DOWN,RGHT),

    /* Layer 1: HHKB mode (Space)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
     * |------------------------------------------------------`    |
     * |      |VoD|VoU|Mut|   |   |   |Bsp|Del|Fn10|Lef|Rig|   |   |
     * |-----------------------------------------------------------|
     * |       |   |   |Fn9|   |   |   |   |   |   |Dow|   |PgU|   |
     * |-----------------------------------------------------------|
     * |   ||  ~|   |   |   |         |   |   |   |   ||Hom|PgD|End|
     * `-----------------------------------------------------------'
     */
    KEYMAP_DAN(PWR,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, INS, DEL, \
              CAPS  ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,  UP, TRNS,        \
              TRNS    ,VOLD,VOLU,MUTE,TRNS,TRNS,TRNS,BSPC, DEL,FN10,LEFT,RGHT,TRNS,PENT , \
              TRNS     ,TRNS,TRNS, FN9,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,DOWN,TRNS,PGUP,TRNS, \
              TRNS,  FN4,TRNS,TRNS,TRNS,    TRNS     ,TRNS,TRNS,TRNS,TRNS, HOME,PGDN, END),
    /* Layer 2: Mouse mode (HHKB Right Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |     |Mb1|McU|Mb2|MwU|   |   |   |   |   |   |Wbk|Wfr|     |
     * |------------------------------------------------------`    |
     * |      |McL|McD|McR|MwD|   |   |   |   |   |   |   |   |    |
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |   |   |   |   |   |   |MwU|   |
     * |-----------------------------------------------------------|
     * |   ||   |   |   |   |   Mb1   |   |   |   |   ||MwL|MwD|MwR|
     * `-----------------------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel / W: Web browser
     */
    KEYMAP_DAN(PWR,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, INS, DEL, \
              CAPS  ,BTN1,MS_U,BTN2, WH_U,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BTN4,BTN5,        \
              TRNS    ,MS_L,MS_D,MS_R,WH_D,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS , \
              TRNS     ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_D,TRNS, \
              TRNS, TRNS,TRNS,TRNS,TRNS,    BTN1     ,TRNS,TRNS,TRNS,TRNS, WH_L,WH_U,WH_R),
};

enum macro_id {
    CMD_TAB,
    CMD_GRAVE,
    HASH_TILDE,
    CTRL_A,
    CMD_ALT_C,
    CMD_SHIFT_L,
};

enum function_id {
    CMD_TAB_CMD,
};

/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPC),            // function layer with Space
    [1] = ACTION_MACRO(HASH_TILDE),                   // hash / tilde
    [2] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_F18),      // notification centre
    [3] = ACTION_LAYER_TAP_KEY(2, MOD_RCTL),          // wasd mouse mode
    [4] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),          // tilde
    [5] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_F19),      // alfred
    [6] = ACTION_FUNCTION_TAP(CMD_TAB_CMD),           // tap cmd tab or cmd
    [7] = ACTION_MACRO(CMD_GRAVE),                    // grave tab
    [8] = ACTION_MACRO(CTRL_A),                       // ctrl a
    [9]  = ACTION_MACRO(CMD_ALT_C),                    // cmd alt c
    [10] = ACTION_MACRO(CMD_SHIFT_L),                  // cmd shift l
};

/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case CMD_TAB:
            return (record->event.pressed ?
                    MACRO( D(LGUI), T(TAB), U(LGUI), END ) :
                    MACRO_NONE);
	case CMD_GRAVE:
            return (record->event.pressed ?
                    MACRO( D(LGUI), T(GRV), U(LGUI), END) :
                    MACRO_NONE);
        case HASH_TILDE:
            if (get_mods()&(MOD_LSFT|MOD_RSFT)) {
                return (record->event.pressed ?
                       MACRO( D(GRV), END ) :
                       MACRO( U(GRV), END ));
            } else {
                return (record->event.pressed ?
                       MACRO( D(LALT), D(3), U(LALT), END ) :
                       MACRO( U(LALT), U(3), END ));
            }
       case CTRL_A:
            return (record->event.pressed ?
                       MACRO( D(LCTL), T(A), U(LCTL), END ) :
                       MACRO_NONE);
       case CMD_ALT_C:
            return (record->event.pressed ?
                    MACRO( D(LGUI), D(LALT), T(C), U(LGUI),  U(LALT), END) :
                    MACRO_NONE);
       case CMD_SHIFT_L:
            return (record->event.pressed ?
                    MACRO( D(LGUI), D(LSFT), T(L), U(LGUI),  U(LSFT), END) :
                    MACRO_NONE);
    }
    return MACRO_NONE;
}

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case CMD_TAB_CMD:
            if (record->event.pressed) {
                if (record->tap.count > 0 && !record->tap.interrupted) {
                    if (record->tap.interrupted) {
                        register_mods(MOD_BIT(KC_LGUI));
                    }
                } else {
                    register_mods(MOD_BIT(KC_LGUI));
                }
            } else {
                if (record->tap.count > 0 && !(record->tap.interrupted)) {
                    action_macro_play(MACRO( D(LGUI), T(TAB), U(LGUI), END ));
                    record->tap.count = 0;  // ad hoc: cancel tap
                } else {
                    unregister_mods(MOD_BIT(KC_LGUI));
                }
            }
            break;
    }
}
