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
     * |Fn2||  #|Gui|Alt|F16|   Fn0   |Alt|GUI|Con|Fn3||Rig|Dow|Lef|
     * `-----------------------------------------------------------'
     */
    KEYMAP_DAN(ESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL, DEL,BSPC,  \
              TAB    ,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,         \
              FN5     ,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,NUHS, ENT ,  \
              LSFT     ,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT, SLSH, GRV,  UP,RSFT, \
              FN2 , FN1,LGUI,LALT, F16,    FN0      ,RALT,RGUI,RCTL, FN3, LEFT,DOWN,RGHT),

    /* Layer 1: HHKB mode (Space)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
     * |------------------------------------------------------`    |
     * |      |VoD|VoU|Mut|   |   |  *|  /|   |   |Lef|Rig|   |    |
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |  +|  -|   |   |Dow|   |PgU|   |
     * |-----------------------------------------------------------|
     * |   ||  ~|   |   |   |         |   |   |   |   ||Hom|PgD|End|
     * `-----------------------------------------------------------'
     */
    KEYMAP_DAN(PWR,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, INS, DEL, \
              CAPS  ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,  UP, TRNS,        \
              TRNS    ,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,TRNS,TRNS,LEFT,RGHT,TRNS,PENT , \
              TRNS     ,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,TRNS,TRNS,DOWN,TRNS,PGUP,TRNS, \
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



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPC),            // function layer with Space
    [1] = ACTION_MODS_KEY(MOD_LALT, KC_3),            // hash
    [2] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_F17),      // notification centre
    [3] = ACTION_LAYER_TAP_TOGGLE(2),                 // wasd mouse mode
    [4] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),          // tilde
    [5] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_F16),      // alfred
};
