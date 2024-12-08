/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include QMK_KEYBOARD_H

enum layer_names {
  _BASE,
  _NUM,
  _NAV,
  _CODE,
  _DEV
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
  //,-------------+-------------+-------------+-------------+-------------+-------------.                               ,--------------+-------------+-------------+-------------+-------------+-------------.
      KC_TAB,       KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                                         KC_Y,          KC_U,         KC_I,         KC_O,         KC_P,         KC_MINS,
  //|-------------+-------------+-------------+-------------+-------------+-------------|                               |--------------+-------------+-------------+-------------+-------------+-------------|
      KC_LCTL,      LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G,                                         KC_H,          RCTL_T(KC_J), RSFT_T(KC_K), LALT_T(KC_L), LGUI_T(KC_SCLN), KC_QUOT,
  //|-------------+-------------+-------------+-------------+-------------+-------------|                               |--------------+-------------+-------------+-------------+-------------+-------------|
      KC_LSFT,      KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,                                         KC_N,          KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,      KC_RSFT,
  //|-------------+-------------+-------------+-------------+-------------+-------------+-------------|  |--------------+--------------+-------------+-------------+-------------+-------------+-------------|
                                                             MO(3),        MO(1),         KC_ENT,         KC_BSPC,       KC_SPC,        MO(2)
                                                          //`-------------+-------------+-------------'  `--------------+--------------+-------------'
  ),

    [1] = LAYOUT_split_3x6_3(
  //,-------------+-------------+-------------+-------------+-------------+-------------.                               ,--------------+-------------+-------------+-------------+-------------+-------------.
      KC_TAB,       KC_EXLM,      KC_AT,        KC_HASH,      KC_DLR,       KC_PERC,                                      KC_CIRC,       KC_AMPR,      KC_ASTR,      KC_LPRN,      KC_MINS,      KC_EQL,
  //|-------------+-------------+-------------+-------------+-------------+-------------|                               |--------------+-------------+-------------+-------------+-------------+-------------|
      KC_LCTL,      KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                                         KC_6,          KC_7,         KC_8,         KC_9,         KC_0,         XXXXXXX,
  //|-------------+-------------+-------------+-------------+-------------+-------------|                               |--------------+-------------+-------------+-------------+-------------+-------------|
      KC_LSFT,      KC_GRV,       KC_TILD,      KC_LBRC,      KC_LPRN,      KC_LCBR,                                      KC_RCBR,       KC_RPRN,      KC_RBRC,      KC_BSLS,      KC_PIPE,      KC_RSFT,
  //|-------------+-------------+-------------+-------------+-------------+-------------+-------------|  |--------------+--------------+-------------+-------------+-------------+-------------+-------------|
                                                             XXXXXXX,      _______,      XXXXXXX,         KC_DEL,         KC_TAB,        XXXXXXX
                                                          //`-------------+-------------+-------------'  `--------------+--------------+-------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-------------+-------------+-------------+-------------+-------------+-------------.                               ,--------------+-------------+-------------+-------------+-------------+-------------.
      KC_TAB,       XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                      KC_PGUP,       KC_HOME,      KC_UP,        KC_END,       XXXXXXX,      KC_ESC,
  //|-------------+-------------+-------------+-------------+-------------+-------------|                               |--------------+-------------+-------------+-------------+-------------+-------------|
      KC_LCTL,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                      KC_PGDN,       KC_LEFT,      KC_DOWN,      KC_RIGHT,     XXXXXXX,      MO(4),
  //|-------------+-------------+-------------+-------------+-------------+-------------|                               |--------------+-------------+-------------+-------------+-------------+-------------|
      KC_LSFT,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                      KC_PSCR,       XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_RSFT,
  //|-------------+-------------+-------------+-------------+-------------+-------------+-------------|  |--------------+--------------+-------------+-------------+-------------+-------------+-------------|
                                                              XXXXXXX,      XXXXXXX,      XXXXXXX,         XXXXXXX,       XXXXXXX,       _______
                                                          //`-------------+-------------+-------------'  `--------------+--------------+-------------'
  ),


    [3] = LAYOUT_split_3x6_3(
  //,-------------+-------------+-------------+-------------+-------------+-------------.                               ,--------------+-------------+-------------+-------------+-------------+-------------.
      UG_NEXT,      KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_VOLU,                                      LCTL(KC_PMNS), XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
  //|-------------+-------------+-------------+-------------+-------------+-------------|                               |--------------+-------------+-------------+-------------+-------------+-------------|
      UG_TOGG,      KC_F5,        KC_F6,        KC_F7,        KC_F8,        KC_VOLD,                                      LCTL(KC_PPLS), XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
  //|-------------+-------------+-------------+-------------+-------------+-------------|                               |--------------+-------------+-------------+-------------+-------------+-------------|
      QK_BOOT,      KC_F9,        KC_F10,       KC_F11,       KC_F12,       KC_MUTE,                                      LCTL(KC_0),    XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
  //|-------------+-------------+-------------+-------------+-------------+-------------+-------------|  |--------------+--------------+-------------+-------------+-------------+-------------+-------------|
                                                              _______,      XXXXXXX,      XXXXXXX,         KC_MPLY,       KC_MPRV,       KC_MNXT
                                                          //`-------------+-------------+-------------'  `--------------+--------------+-------------'

  ),

    [4] = LAYOUT_split_3x6_3(
  //,-------------+-------------+-------------+-------------+-------------+-------------.                               ,--------------+-------------+-------------+-------------+-------------+-------------.
      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      LSFT(KC_F6),  LALT(KC_F12),                                 XXXXXXX,       XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
  //|-------------+-------------+-------------+-------------+-------------+-------------|                               |--------------+-------------+-------------+-------------+-------------+-------------|
      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      LALT(KC_INS),                                 XXXXXXX,       XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      _______,
  //|-------------+-------------+-------------+-------------+-------------+-------------|                               |--------------+-------------+-------------+-------------+-------------+-------------|
      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                      XXXXXXX,       XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
  //|-------------+-------------+-------------+-------------+-------------+-------------+-------------|  |--------------+--------------+-------------+-------------+-------------+-------------+-------------|
                                                              XXXXXXX,      LSFT(KC_F10), LCTL(KC_F12),    XXXXXXX,       XXXXXXX,      _______
                                                          //`-------------+-------------+-------------'  `--------------+--------------+-------------'

  )
};

#ifdef OLED_ENABLE
bool oled_task_user() {
  oled_set_cursor(0, 1);

  switch (get_highest_layer(layer_state)) {
  case _BASE:
    oled_write_ln_P(PSTR("LAYER> Base"), false);
    break;
  case _NUM:
    oled_write_ln_P(PSTR("LAYER> Nums & Syms"), false);
    break;
  case _NAV:
    oled_write_ln_P(PSTR("LAYER> Navigation"), false);
    break;
  case _CODE:
    oled_write_ln_P(PSTR("LAYER> Code"), false);
    break;
  case _DEV:
    oled_write_ln_P(PSTR("LAYER> IDE/Dev"), false);
    break;
  }

  return false;
}

void oled_render_boot(bool bootloader) {
  oled_clear();

  oled_set_cursor(0, 1);
  if (bootloader) {
    oled_write_P(PSTR(">>> Flashing firmware"), false);
  } else {
    oled_write_P(PSTR(">>> Rebooting ..."), false);
  }

  oled_render_dirty(true);
}

bool shutdown_user(bool jump_to_bootloader) {
  oled_render_boot(jump_to_bootloader);

  return false;
}

#endif
