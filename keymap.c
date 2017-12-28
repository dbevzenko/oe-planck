// This is the personal keymap of Dmytro Bevzenko (@dbevzenko)
// It is based on the keymap by Jeremy Cowgar (@jcowgar).

// Configuration options
#define PREVENT_STUCK_MODIFIERS

#include "planck.h"
#include "action_layer.h"
#include "eeconfig.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
enum my_layers
{
  ALPH = 0,
  NUMS,
  CURS,
  SYMB,
  FKEY,
  MYCODE
};

// Each macro gets a name for readability.
enum my_keycodes
{
  MY_BKILL = SAFE_RANGE, // cut to the beginning of a line
  MY_FKILL, // cut to the end of a line
  BACKLIT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [ALPH] = {
    {LT(FKEY, KC_RBRC),  LT(NUMS, KC_Q),      LT(MYCODE, KC_W),      KC_E,        KC_R,   KC_T,  KC_Y,  KC_U,    KC_I,    KC_O,    KC_P,    ALT_T(KC_LBRC)},
    {CTL_T(KC_MINUS),  LT(CURS, KC_A),      LT(SYMB, KC_S),      KC_D,        KC_F,   KC_G, KC_H, KC_J,    KC_K,    KC_L,    KC_SCLN,    CTL_T(KC_QUOTE)},
    {SFT_T(KC_GRAVE),     KC_Z, KC_X,      KC_C,        KC_V,   KC_B, KC_N, KC_M,    KC_COMM,    KC_DOT, KC_SLSH,  SFT_T(KC_BSLASH)},
    {KC_TAB,   KC_LALT,             KC_LGUI,   KC_ESC, KC_SPC, KC_DELT,  KC_ENT,  KC_BSPC, KC_LEFT, KC_UP, KC_DOWN, CTL_T(KC_RIGHT)}
  },
  [NUMS] = {
    {KC_TRNS, KC_TRNS,   KC_TRNS, KC_PLUS,     KC_MINUS,      KC_LPRN, KC_RPRN, KC_1,      KC_2,      KC_3,        KC_4,        KC_5},
    {KC_TRNS, KC_TRNS,   KC_TRNS,   KC_EQUAL,    KC_UNDERSCORE, KC_LBRACKET, KC_RBRACKET, KC_6,      KC_7,      KC_8,        KC_9,        KC_0},
    {KC_TRNS, KC_TRNS,   KC_TRNS,     KC_TRNS,     KC_LCTL,       KC_LGUI, KC_LALT, KC_LSHIFT, KC_TRNS,   KC_TRNS,     KC_TRNS,     KC_TRNS}
  },
  [CURS] = {
    {KC_TRNS, KC_TRNS,   KC_NO,     KC_NO,   KC_NO,    KC_TRNS,        KC_TRNS,        KC_PASTE,  KC_PGUP,  KC_NO,  KC_UP,    KC_NO},
    {KC_TRNS, KC_TRNS,   KC_NO,   KC_DELT,   KC_RIGHT, MY_BKILL,        KC_HOME,        KC_END,  MY_FKILL,  KC_NO, KC_BSPACE, KC_NO},
    {KC_NO,   KC_NO,     KC_NO,     KC_NO,   KC_NO,   KC_LEFT,        KC_DOWN,        KC_NO,   KC_PGDN,  KC_NO,  KC_NO,    KC_NO},
    {KC_NO,   KC_NO,     KC_NO,     KC_NO,   KC_LCTRL, KC_LGUI,        KC_LALT,        KC_LSHIFT, KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS}
  },
  [SYMB] = {
    {KC_TRNS,       KC_TRNS,   KC_TRNS,   KC_PLUS,     KC_MINUS,      KC_ASTERISK,      KC_CIRC,      KC_PIPE,  KC_AT,    KC_HASH,   KC_AMPERSAND,   KC_TILDE},
    {KC_TRNS,       KC_TRNS,   KC_TRNS,   KC_EQUAL,    KC_UNDERSCORE, KC_TRNS,          KC_TRNS,      KC_LCBR,   KC_RCBR,     KC_GRAVE,   KC_QUOT,   KC_DQUO},
    {KC_TRNS,       KC_TRNS,   KC_TRNS,   KC_PERCENT,  KC_DOLLAR,     KC_TRNS,          KC_TRNS,      KC_LPRN,   KC_RPRN, KC_LBRACKET,     KC_RBRACKET,   KC_EXLM},
    {KC_TRNS,       KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_LCTL,    KC_LGUI,          KC_LALT,      KC_LSHIFT, KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS}
  },
  [FKEY] = {
    {KC_TRNS,     KC_TRNS, KC_NO,     KC_NO,     KC_NO,   KC_NO,        KC_NO,      KC_F1,      KC_F2,     KC_F3,    KC_F4,    KC_F5},
    {KC_TRNS,     KC_TRNS, KC_NO,     KC_NO,     KC_NO,   KC_NO,        KC_NO,      KC_F6,      KC_F7,     KC_F8,     KC_F9,     KC_F10},
    {KC_NO,       KC_NO,   KC_NO,     KC_NO,     KC_NO,   KC_NO,        KC_NO,      KC_F11,      KC_F12,     KC_F13,  KC_F14,  KC_F15},
    {KC_NO,       KC_NO,   KC_NO,     KC_NO,     KC_LCTL, KC_LGUI,      KC_LALT,    KC_LSHIFT,  KC_VOLD,     KC_VOLU,     KC_MUTE,     BACKLIT}
  },
  [MYCODE] = {
    {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO},
    {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO},
    {KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO},
    {KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO,   KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_TRNS, KC_NO}  
  }
};

void press_key(uint16_t key)
{
  register_code(key);
  unregister_code(key);
}

void press_two_keys(uint16_t key1, uint16_t key2)
{
  register_code(key1);
  register_code(key2);
  unregister_code(key2);
  unregister_code(key1);
}

void press_three_keys(uint16_t key1, uint16_t key2, uint16_t key3)
{
  register_code(key1);
  register_code(key2);
  register_code(key3);
  unregister_code(key3);
  unregister_code(key2);
  unregister_code(key1);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
  switch (keycode)
  {
  case MY_BKILL:
    if (record->event.pressed)   
    {
      press_two_keys(KC_LSHIFT, KC_HOME);
      press_two_keys(KC_LCTL, KC_X);
    }
    return false;

  case MY_FKILL:
    if (record->event.pressed)
    {
      press_two_keys(KC_LSHIFT, KC_END);
      press_two_keys(KC_LCTL, KC_X);
    }
    return false;

    case BACKLIT:
      if (record->event.pressed) {
        register_code(KC_RSFT);
        #ifdef BACKLIGHT_ENABLE
          backlight_step();
        #endif
        PORTE &= ~(1<<6);
      } else {
        unregister_code(KC_RSFT);
        PORTE |= (1<<6);
      }
      return false;
  }

  return true;
}
