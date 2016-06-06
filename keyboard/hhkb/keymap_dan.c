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
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  \|    |
     * |-----------------------------------------------------------|
     * |Shift  |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|   |Up |Shi|
     * |-----------------------------------------------------------|
     * |Fn0||  #|Gui|Alt|F16|  Space  |Alt|GUI|Con|Fn0||Rig|Dow|Lef|
     * `-----------------------------------------------------------'
     */
    KEYMAP_DAN(ESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL, DEL,BSPC,  \
              TAB    ,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,         \
              LCTL    ,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,NUHS, ENT ,  \
              LSFT     ,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT, SLSH,  RO,  UP,RSFT, \
              FN0 , ZKHK,LGUI,LALT, F16,    SPC ,     RALT,RGUI,RCTL, FN0, LEFT,DOWN,RGHT),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
     * |------------------------------------------------------`    |
     * |      |VoD|VoU|Mut|   |   |  *|  /|   |   |Lef|Rig|   |    |
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |  +|  -|   |   |Dow|   |PgU|   |
     * |-----------------------------------------------------------|
     * |   ||   |   |   |   |         |   |   |   |   ||Hom|PgD|End|
     * `-----------------------------------------------------------'
     */
    KEYMAP_DAN(PWR,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, INS, DEL, \
              CAPS  ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,  UP, TRNS,        \
              TRNS    ,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,TRNS,TRNS,LEFT,RGHT,TRNS,PENT , \
              TRNS     ,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,TRNS,TRNS,DOWN,TRNS,PGUP,TRNS, \
              TRNS, TRNS,TRNS,TRNS,TRNS,    TRNS,    TRNS,TRNS,TRNS,TRNS, HOME,PGDN, END),
};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(1),
};
