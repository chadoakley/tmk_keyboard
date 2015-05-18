static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    KEYMAP(  // Layer0: DEFAULT
        // left hand
        GRV, 1,   2,   3,   4,   5,   BSLS,
        TAB, Q,   W,   E,   R,   T,   FN5,
        ESC, A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,   FN6,
        NO,  NO,  NO,  LALT,LGUI,
                                      NO,  NO,
                                           NO,
                                 FN1, FN2, NO,
        // right hand
             NO,  6,   7,   8,   9,   0,   MINS,
             FN8, Y,   U,   I,   O,   P,   EQL,
                  H,   J,   K,   L,   SCLN,QUOT,
             FN9 ,N,   M,   COMM,DOT, SLSH,RSFT,
                       LEFT,DOWN,UP,  RGHT,NO,
        PGUP,DEL,
        PGDN,
        NO,  ENT, SPC
    ),

    KEYMAP(  // Layer1: NUMPAD
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,NO,  PSLS,PAST,PAST,PMNS,BSPC,
             TRNS,NO,  P7,  P8,  P9,  PMNS,PGUP,
                  NO,  P4,  P5,  P6,  PPLS,PGDN,
             TRNS,NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,SLSH,PENT,PENT,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer2: SPECIAL RIGHT
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,

        // right hand
        //
        //    ! { } |
        //    $ ( ) [ ] \
        //    # < > ^
        //
             FN15,NO,  NO,  NO,  NO,  NO,  NO,
             TRNS,FN1, FN2, FN3, FN4, NO,  NO
                  FN5, FN6, FN7, LBRC,RBRC,BSLS,
             TRNS,FN8, FN9,FN10, FN11,NO,  NO,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        VOLD,VOLU,
        MUTE,
        MPLY,TRNS,TRNS
    ),

    //
    // rarely used
    //

    KEYMAP(  // Layer3: F-keys only
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
};

enum macro_id {
    FUCK,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [1] =  ACTION_MODS_TAP_KEY(MOD_LSFT, KC_BSPC),         // FN1 = LShift with tap BackSpace
    [2] =  ACTION_MODS_TAP_KEY(MOD_LCTL, KC_DEL),          // FN2 = LCtrl  with tap Delete

    [3] =  ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT),          // FN3 = UNUSED
    [4] =  ACTION_MODS_TAP_KEY(MOD_RSFT, KC_SPC),          // FN4 = UNUSED

    [5] =  ACTION_LAYER_MOMENTARY(1),                      // FN5 = momentary NUMPAD
    [6] =  ACTION_LAYER_MOMENTARY(2),                      // FN6 = momentary SPECIAL KEYS
    [7] =  ACTION_LAYER_MOMENTARY(3),                      // FN7 = momentary FUNCTION KEYS

    [8] =  ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_SPC),   // FN8 = Alfred
    [9] =  ACTION_MODS_KEY(MOD_LCTL | MOD_LGUI, KC_SPC),   // FN9 = Moom
}
static const uint16_t PROGMEM fn_actions_1[] = {
}
static const uint16_t PROGMEM fn_actions_2[] = {
    [1] =   ACTION_MODS_KEY(MOD_LSFT, KC_1),                // FN1  = Shifted Exclamation
    [2] =   ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),             // FN2  = Shifted {
    [3] =   ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),             // FN3  = Shifted }
    [4] =   ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),             // FN4  = Shifted |
    [5] =   ACTION_MODS_KEY(MOD_LSFT, KC_3),                // FN5  = Shifted #
    [6] =   ACTION_MODS_KEY(MOD_LSFT, KC_9),                // FN6  = Shifted (
    [7] =   ACTION_MODS_KEY(MOD_LSFT, KC_0),                // FN7  = Shifted )
    [8] =   ACTION_MODS_KEY(MOD_LSFT, KC_4),                // FN8  = Shifted $
    [9] =   ACTION_MODS_KEY(MOD_LSFT, KC_COMM),              // FN9  = Shifted <
    [10] =  ACTION_MODS_KEY(MOD_LSFT, KC_DOT),              // FN10 = Shifted >
    [11] =  ACTION_MODS_KEY(MOD_LSFT, KC_6),                // FN11 = Shifted ^
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

#define FN_ACTIONS_SIZE     (sizeof(fn_actions)   / sizeof(fn_actions[0]))
#define FN_ACTIONS_1_SIZE   (sizeof(fn_actions_1) / sizeof(fn_actions_1[0]))
#define FN_ACTIONS_2_SIZE   (sizeof(fn_actions_2) / sizeof(fn_actions_2[0]))

/*
 * translates Fn keycode to action
 * for some layers, use different translation table
 */
action_t keymap_fn_to_action(uint8_t keycode)
{
    uint8_t layer = biton32(layer_state);

    action_t action;
    action.code = ACTION_NO;

    if (layer == 1 && FN_INDEX(keycode) < FN_ACTIONS_1_SIZE) {
        action.code = pgm_read_word(&fn_actions_1[FN_INDEX(keycode)]);
    }

    if (layer == 2 && FN_INDEX(keycode) < FN_ACTIONS_2_SIZE) {
        action.code = pgm_read_word(&fn_actions_2[FN_INDEX(keycode)]);
    }

    // by default, use fn_actions from default layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possibility to switch layers back
    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}
