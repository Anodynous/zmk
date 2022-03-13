/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zmk/keys.h>
#include <zmk/hid.h>

int zmk_hog_init();

int zmk_hog_send_keyboard_report(struct zmk_hid_keyboard_report_body *body);
int zmk_hog_send_consumer_report(struct zmk_hid_consumer_report_body *body);
int zmk_hog_send_mouse_report(struct zmk_hid_mouse_report_body *body);
int zmk_hog_send_plover_report(struct zmk_hid_plover_report_body *body);

// Anodynous added below to fix build issue
int zmk_hog_send_mouse_report_direct(struct zmk_hid_mouse_report_body *body);