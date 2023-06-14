// Copyright 2022 jack (@waffle87)
// SPDX-License-Identifier: MIT

#define COMBO(name, keypress, keypos) \
combo_##name {                        \
   timeout-ms = <50>;                 \
   bindings = <keypress>;             \
   key-positions = <keypos>;          \
};

#define TAP_DANCE(name, keypress1, keypress2) \
td_##name: name {                             \
  compatible = "zmk,behavior-tap-dance";      \
  label = ###name;                            \
  #binding-cells = <0>;                       \
  tapping-term-ms = <200>;                    \
  bindings = <keypress1>, <keypress2>;        \
};
