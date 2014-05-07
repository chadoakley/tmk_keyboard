static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    KEYMAP(  // Layer0: default, leftled:none
        // left hand
        GRV, 1,   2,   3,   4,   5,   BSLS,
        TAB, Q,   W,   E,   R,   T,   FN24,
        ESC, A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,   FN27,
        NO,  NO,  NO,  LALT,LGUI,
                                      FN18,FN19,
                                           NO,
                                 FN12,FN13,FN14,
        // right hand
             FN30,6,   7,   8,   9,   0,   MINS,
             FN29,Y,   U,   I,   O,   P,   EQL,
                  H,   J,   K,   L,   SCLN,QUOT,
             FN28,N,   M,   COMM,DOT, SLSH,RSFT,
                       LEFT,DOWN,UP,  RGHT,NO,
        PGUP,DEL,
        PGDN,
        FN14,ENT, SPC
    ),

    KEYMAP(  // Layer1: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer2: numpad, leftled:mid/blue
        // left hand
        TRNS,NO,  NO,  NO,  NO,  PAUS,PSCR,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  TRNS,NO,  TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             SLCK,NLCK,PSLS,PAST,PAST,PMNS,BSPC,
             TRNS,NO,  P7,  P8,  P9,  PMNS,PGUP,
                  TRNS,P4,  P5,  P6,  PPLS,PGDN,
             TRNS,NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,SLSH,PENT,PENT,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer3: F-keys + PgUp/PgDn on right hand, leftled:bot/green
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  TRNS,NO,  NO,  NO,
        TRNS,NO,  TRNS,NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  F1,  F2,  F3,  F4,  PGUP,
                  NO,  F5,  F6,  F7,  F8,  PGDN,
             TRNS,NO,  F9,  F10, F11, F12, APP,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),

    KEYMAP(  // Layer4: unconvenient keys on right hand, leftled:top/white
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,TRNS,  NO,
        TRNS,TRNS,NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,

        // in Workman right hand will be:
        //              +
        //    ! { } |   =
        //    $ ( ) [ ] \
        //    # < > ^
        //

        // right hand
             FN15, NO,  NO,  NO,  NO,  NO,  PPLS,
             TRNS,FN1, FN2, FN3, FN11,NO,  EQL,
                  FN6, FN4, FN5, LBRC,RBRC,BSLS,
             TRNS,FN7, FN8, FN9, FN10,NO,  TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        VOLU,VOLD,
        MUTE,
        MPLY,MPRV,MNXT
    ),

    KEYMAP(  // Layer5: F-keys instead of numbers, leftled:top/white
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F6,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F7,  F8,  F9,  F10, F11, F12, TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer6: F-keys, cursor, Workman-layer switch, Teensy, leftled:top/white+onboard
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F6,
        FN0, NO,  PGUP,PGDN,PGDN,PGUP,TRNS,
        TRNS,LEFT,DOWN,UP,  RGHT,PGDN,
        TRNS,INS, DEL, END, HOME,NO,  TRNS,
        FN18,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F7,  F8,  F9,  F10, F11, F12, MINS,
             TRNS,PGUP,PGUP,UP,  PGDN,NO,  FN0,
                  LEFT,DOWN,UP,  RGHT,NO,  TRNS,
             TRNS,NO,  HOME,END, DEL, INS, TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    //
    // rarely used
    //

    KEYMAP(  // Layer7: F-keys only, leftled:top/white
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,F13, F14, F15, F16, NO,  TRNS,
        TRNS,F17, F18, F19, F20, NO,
        TRNS,F21, F22, F23, F24, NO,  TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  F1,  F2,  F3,  F4,  TRNS,
                  NO,  F5,  F6,  F7,  F8,  TRNS,
             TRNS,NO,  F9,  F10, F11, F12, TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer8: mouse and navigation, leftled:mid/blue+bot/green
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  TRNS,NO,  NO,
        TRNS,NO,  NO,  TRNS,NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,

        // right hand
             TRNS,NO,  NO,  NO,  NO,  NO,  NO,
             TRNS,BTN2,WH_L,WH_U,WH_D,WH_R,PGUP,
                  BTN1,MS_L,MS_U,MS_D,MS_R,PGDN,
             TRNS,BTN3,HOME,END, DEL, INS, NO,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

/*
    // templates to copy from

    KEYMAP(  // LayerN: transparent on edges + hard-defined thumb keys, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // LayerN: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

enum macro_id {
    FUCK,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [0] =   ACTION_FUNCTION(TEENSY_KEY),                    // FN0  - Teensy key

    [1] =   ACTION_MODS_KEY(MOD_LSFT, KC_1),                // FN1  = Shifted Exclamation
    [2] =   ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),             // FN2  = Shifted {
    [3] =   ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),             // FN3  = Shifted }
    [4] =   ACTION_MODS_KEY(MOD_LSFT, KC_9),                // FN4  = Shifted (
    [5] =   ACTION_MODS_KEY(MOD_LSFT, KC_0),                // FN5  = Shifted )
    [6] =   ACTION_MODS_KEY(MOD_LSFT, KC_4),                // FN6  = Shifted $
    [7] =   ACTION_MODS_KEY(MOD_LSFT, KC_3),                // FN7  = Shifted #
    [8] =   ACTION_MODS_KEY(MOD_LSFT, KC_COMM),             // FN8  = Shifted <
    [9] =   ACTION_MODS_KEY(MOD_LSFT, KC_DOT),              // FN9  = Shifted >
    [10] =  ACTION_MODS_KEY(MOD_LSFT, KC_6),                // FN10 = Shifted ^
    [11] =  ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),             // FN11 = Shifted |

    [12] =  ACTION_MODS_TAP_KEY(MOD_LSFT, KC_BSPC),         // FN12 = LShift with tap BackSpace
    [13] =  ACTION_MODS_TAP_KEY(MOD_LCTL, KC_DEL),          // FN13 = LCtrl  with tap Delete
    [14] =  ACTION_LAYER_TAP_KEY(6, KC_ESC),                // FN14 = momentary Layer6 with tap Escape

    [15] =  ACTION_MACRO(FUCK),                             // FN15 = FUCK

    [16] =  ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT),          // FN16 = RCtrl  with tap Enter
    [17] =  ACTION_MODS_TAP_KEY(MOD_RSFT, KC_SPC),          // FN17 = RShift with tap Space
    [18] =  ACTION_LAYER_SET(0, ON_BOTH),                   // FN18 - set Layer0
    [19] =  ACTION_LAYER_SET(2, ON_BOTH),                   // FN19 - set Layer2, to use with Numpad keys
    [20] =  ACTION_LAYER_MOMENTARY(2),                      // FN20 - momentary Layer2, to use with Numpad keys
    [21] =  ACTION_LAYER_TAP_KEY(5, KC_ENT),                // FN21 - momentary Layer5 on Enter, to use with F* keys on top row
    [22] =  ACTION_LAYER_TAP_KEY(6, KC_ENT),                // FN22 - momentary Layer6 on Enter, to use with F* keys on top row, cursor, Teensy, Workman-layer switch
    [23] =  ACTION_LAYER_TAP_KEY(7, KC_BSLS),               // FN23 - momentary Layer7 on ' , to use with F* keys (F1-F24)

    [24] =  ACTION_LAYER_MOMENTARY(2),                  // FN24 = momentary Layer2 on A key, to use with Numpad keys
    [25] =  ACTION_LAYER_TAP_KEY(3, KC_S),                  // FN25 = momentary Layer3 on S key, to use with F* keys
    [26] =  ACTION_LAYER_TAP_KEY(8, KC_D),                  // FN26 = momentary Layer8 on D key, to use with mouse and navigation keys
    [27] =  ACTION_LAYER_MOMENTARY(4),                  // FN27 = momentary Layer4 on F key, to use with unconvenient keys

    [28] =  ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_SPC),              // FN28 = Alfred
    [29] =  ACTION_MODS_KEY(MOD_LCTL | MOD_LGUI, KC_SPC),              // FN29 = Moom
    [30] =  ACTION_MODS_KEY(MOD_LCTL | MOD_LALT | MOD_LGUI, KC_SPC),   // FN30 = Text
    [31] =  ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_LBRC),             // FN31 = Previous tab
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case FUCK:
            return (record->event.pressed ?
                    MACRO( I(0), T(F), T(U), T(C), T(K), END ) :
                    MACRO_NONE );
    }
    return MACRO_NONE;
}
