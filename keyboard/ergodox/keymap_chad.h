static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    KEYMAP(  // Layer0: DEFAULT
        // left hand
        GRV, 1,   2,   3,   4,   5,   BSLS,
        TAB, Q,   W,   E,   R,   T,   FN28,
        ESC, A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,   FN29,
        NO,  NO,  NO,  LALT,LGUI,
                                      FN25,FN26,
                                           NO,
                                 FN1, LCTL,FN30,
        // right hand
             NO,  6,   7,   8,   9,   0,   MINS,
             FN8, Y,   U,   I,   O,   P,   EQL,
                  H,   J,   K,   L,   SCLN,QUOT,
             FN9 ,N,   M,   COMM,DOT, SLSH,RSFT,
                       LEFT,DOWN,UP,  RGHT,NO,
        PGUP,DEL,
        PGDN,
        FN31, ENT, SPC
    ),

    KEYMAP(  // Layer1: NUMPAD
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
             NO,  NO,  PSLS,PAST,PAST,PMNS,BSPC,
             NO,  NO,  P7,  P8,  P9,  PMNS,PGUP,
                  NO,  P4,  P5,  P6,  PPLS,PGDN,
             NO,  NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,SLSH,PENT,PENT,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer2: SPECIAL RIGHT
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
        //
        //    ! { } |
        //    $ ( ) [ ]
        //    # < > ^
        //
             NO,  NO,  NO,  NO,  NO,  NO,  NO,
             TRNS,FN1, FN2, FN3, FN4, NO,  NO,
                  FN5, FN6, FN7, LBRC,RBRC,BSLS,
             TRNS,FN8, FN9,FN10, FN11,NO,  NO,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        VOLD,VOLU,
        MUTE,
        MPLY,MPRV,MNXT
    ),

    KEYMAP(  // Layer3: Arrows
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
                  LEFT,DOWN,UP,  RGHT,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer4: F-keys only
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,F13, F14, F15, F16, TRNS,TRNS,
        TRNS,F17, F18, F19, F20, TRNS,
        TRNS,F21, F22, F23, F24, TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,F1,  F2,  F3,  F4,  TRNS,
                  TRNS,F5,  F6,  F7,  F8,  TRNS,
             TRNS,TRNS,F9,  F10, F11, F12, TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer5: Gaming?
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 SPC, TRNS,LALT,
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
};

enum macro_id {
    FUCK,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [1] =   ACTION_MODS_TAP_KEY(MOD_LSFT, KC_BSPC),         // FN1 = LShift with tap BackSpace
    [2] =   ACTION_MODS_TAP_KEY(MOD_LCTL, KC_DEL),          // FN2 = LCtrl  with tap Delete

    [3] =   ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT),          // FN3 = UNUSED
    [4] =   ACTION_MODS_TAP_KEY(MOD_RSFT, KC_SPC),          // FN4 = UNUSED


    [8] =   ACTION_MODS_KEY(MOD_LCTL | MOD_LALT | MOD_LSFT, KC_SPC),   // FN8 = Alfred
    [9] =   ACTION_MODS_KEY(MOD_LCTL | MOD_LALT | MOD_LGUI, KC_SPC),   // FN9 = Moom

    [25] =  ACTION_LAYER_SET(0, ON_BOTH),                   // FN25 - set Layer0
    [26] =  ACTION_LAYER_TOGGLE(5),                         // FN26 - set Layer5

    [28] =  ACTION_LAYER_MOMENTARY(1),                      // FN28 = momentary NUMPAD
    [29] =  ACTION_LAYER_MOMENTARY(2),                      // FN20 = momentary SPECIAL KEYS
    [30] =  ACTION_LAYER_MOMENTARY(3),                      // FN30 = momentary ARROWS
    [31] =  ACTION_LAYER_MOMENTARY(4),                      // FN31 = momentary FUNCTION KEYS
} ;
static const uint16_t PROGMEM fn_actions_1[] = {
};
static const uint16_t PROGMEM fn_actions_2[] = {
    [1] =   ACTION_MODS_KEY(MOD_LSFT, KC_1),                // FN1  = Shifted Exclamation
    [2] =   ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),             // FN2  = Shifted {
    [3] =   ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),             // FN3  = Shifted }
    [4] =   ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),             // FN4  = Shifted |
    [5] =   ACTION_MODS_KEY(MOD_LSFT, KC_3),                // FN5  = Shifted #
    [6] =   ACTION_MODS_KEY(MOD_LSFT, KC_9),                // FN6  = Shifted (
    [7] =   ACTION_MODS_KEY(MOD_LSFT, KC_0),                // FN7  = Shifted )
    [8] =   ACTION_MODS_KEY(MOD_LSFT, KC_4),                // FN8  = Shifted $
    [9] =   ACTION_MODS_KEY(MOD_LSFT, KC_COMM),             // FN9  = Shifted <
    [10] =  ACTION_MODS_KEY(MOD_LSFT, KC_DOT),              // FN10 = Shifted >
    [11] =  ACTION_MODS_KEY(MOD_LSFT, KC_6),                // FN11 = Shifted ^
};
static const uint16_t PROGMEM fn_actions_3[] = {
};
static const uint16_t PROGMEM fn_actions_4[] = {
};

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
#define FN_ACTIONS_3_SIZE   (sizeof(fn_actions_3) / sizeof(fn_actions_3[0]))
#define FN_ACTIONS_4_SIZE   (sizeof(fn_actions_4) / sizeof(fn_actions_4[0]))

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

    if (layer == 3 && FN_INDEX(keycode) < FN_ACTIONS_3_SIZE) {
        action.code = pgm_read_word(&fn_actions_3[FN_INDEX(keycode)]);
    }

    if (layer == 4 && FN_INDEX(keycode) < FN_ACTIONS_4_SIZE) {
        action.code = pgm_read_word(&fn_actions_4[FN_INDEX(keycode)]);
    }

    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}
