// Copyright 2022 Andy Sawyer (nydasco)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, \
    K10, K11, K12, K13, K14, K15, \
    K21, K22, K23, K24, K25, \
    K33, K34, K35  \
) { \
    { K00, K01, K02, K03, K04, K05 }, \
    { K10, K11, K12, K13, K14, K15 }, \
    { XXX, K21, K22, K23, K24, K25 }, \
    { XXX, XXX, XXX, K33, K34, K35 }, \
}

// generated by KBFirmware JSON to QMK Parser
// https://noroadsleft.github.io/kbf_qmk_converter/