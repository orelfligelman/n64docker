/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *   Mupen64plus - sdl_key_converter.c                                     *
 *   Mupen64Plus homepage: https://mupen64plus.org/                        *
 *   Copyright (C) 2013 Mupen64plus development team                       *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.          *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))

uint16_t sdl_keysym2scancode(uint16_t keysym);
uint16_t sdl_scancode2keysym(uint16_t scancode);

uint16_t sdl_keysym2scancode(uint16_t keysym)
{
    static const uint16_t keysym2scancode[323] = {
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x002au, /* SDLK_BACKSPACE -> SDL_SCANCODE_BACKSPACE */
        0x002bu, /* SDLK_TAB -> SDL_SCANCODE_TAB */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x009cu, /* SDLK_CLEAR -> SDL_SCANCODE_CLEAR */
        0x0028u, /* SDLK_RETURN -> SDL_SCANCODE_RETURN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0048u, /* SDLK_PAUSE -> SDL_SCANCODE_PAUSE */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0029u, /* SDLK_ESCAPE -> SDL_SCANCODE_ESCAPE */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x002cu, /* SDLK_SPACE -> SDL_SCANCODE_SPACE */
        0x0000u, /* SDLK_EXCLAIM -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_QUOTEDBL -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_HASH -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_DOLLAR -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_AMPERSAND -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_QUOTE -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_LEFTPAREN -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_RIGHTPAREN -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_ASTERISK -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_PLUS -> SDL_SCANCODE_UNKNOWN */
        0x0036u, /* SDLK_COMMA -> SDL_SCANCODE_COMMA */
        0x002du, /* SDLK_MINUS -> SDL_SCANCODE_MINUS */
        0x0037u, /* SDLK_PERIOD -> SDL_SCANCODE_PERIOD */
        0x0038u, /* SDLK_SLASH -> SDL_SCANCODE_SLASH */
        0x0027u, /* SDLK_0 -> SDL_SCANCODE_0 */
        0x001eu, /* SDLK_1 -> SDL_SCANCODE_1 */
        0x001fu, /* SDLK_2 -> SDL_SCANCODE_2 */
        0x0020u, /* SDLK_3 -> SDL_SCANCODE_3 */
        0x0021u, /* SDLK_4 -> SDL_SCANCODE_4 */
        0x0022u, /* SDLK_5 -> SDL_SCANCODE_5 */
        0x0023u, /* SDLK_6 -> SDL_SCANCODE_6 */
        0x0024u, /* SDLK_7 -> SDL_SCANCODE_7 */
        0x0025u, /* SDLK_8 -> SDL_SCANCODE_8 */
        0x0026u, /* SDLK_9 -> SDL_SCANCODE_9 */
        0x0000u, /* SDLK_COLON -> SDL_SCANCODE_UNKNOWN */
        0x0033u, /* SDLK_SEMICOLON -> SDL_SCANCODE_SEMICOLON */
        0x0000u, /* SDLK_LESS -> SDL_SCANCODE_UNKNOWN */
        0x002eu, /* SDLK_EQUALS -> SDL_SCANCODE_EQUALS */
        0x0000u, /* SDLK_GREATER -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_QUESTION -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_AT -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x002fu, /* SDLK_LEFTBRACKET -> SDL_SCANCODE_LEFTBRACKET */
        0x0031u, /* SDLK_BACKSLASH -> SDL_SCANCODE_BACKSLASH */
        0x0030u, /* SDLK_RIGHTBRACKET -> SDL_SCANCODE_RIGHTBRACKET */
        0x0000u, /* SDLK_CARET -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_UNDERSCORE -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_BACKQUOTE -> SDL_SCANCODE_UNKNOWN */
        0x0004u, /* SDLK_a -> SDL_SCANCODE_A */
        0x0005u, /* SDLK_b -> SDL_SCANCODE_B */
        0x0006u, /* SDLK_c -> SDL_SCANCODE_C */
        0x0007u, /* SDLK_d -> SDL_SCANCODE_D */
        0x0008u, /* SDLK_e -> SDL_SCANCODE_E */
        0x0009u, /* SDLK_f -> SDL_SCANCODE_F */
        0x000au, /* SDLK_g -> SDL_SCANCODE_G */
        0x000bu, /* SDLK_h -> SDL_SCANCODE_H */
        0x000cu, /* SDLK_i -> SDL_SCANCODE_I */
        0x000du, /* SDLK_j -> SDL_SCANCODE_J */
        0x000eu, /* SDLK_k -> SDL_SCANCODE_K */
        0x000fu, /* SDLK_l -> SDL_SCANCODE_L */
        0x0010u, /* SDLK_m -> SDL_SCANCODE_M */
        0x0011u, /* SDLK_n -> SDL_SCANCODE_N */
        0x0012u, /* SDLK_o -> SDL_SCANCODE_O */
        0x0013u, /* SDLK_p -> SDL_SCANCODE_P */
        0x0014u, /* SDLK_q -> SDL_SCANCODE_Q */
        0x0015u, /* SDLK_r -> SDL_SCANCODE_R */
        0x0016u, /* SDLK_s -> SDL_SCANCODE_S */
        0x0017u, /* SDLK_t -> SDL_SCANCODE_T */
        0x0018u, /* SDLK_u -> SDL_SCANCODE_U */
        0x0019u, /* SDLK_v -> SDL_SCANCODE_V */
        0x001au, /* SDLK_w -> SDL_SCANCODE_W */
        0x001bu, /* SDLK_x -> SDL_SCANCODE_X */
        0x001cu, /* SDLK_y -> SDL_SCANCODE_Y */
        0x001du, /* SDLK_z -> SDL_SCANCODE_Z */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x004cu, /* SDLK_DELETE -> SDL_SCANCODE_DELETE */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_0 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_1 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_2 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_3 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_4 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_5 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_6 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_7 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_8 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_9 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_10 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_11 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_12 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_13 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_14 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_15 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_16 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_17 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_18 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_19 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_20 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_21 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_22 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_23 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_24 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_25 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_26 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_27 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_28 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_29 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_30 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_31 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_32 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_33 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_34 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_35 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_36 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_37 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_38 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_39 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_40 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_41 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_42 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_43 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_44 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_45 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_46 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_47 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_48 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_49 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_50 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_51 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_52 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_53 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_54 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_55 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_56 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_57 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_58 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_59 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_60 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_61 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_62 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_63 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_64 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_65 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_66 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_67 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_68 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_69 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_70 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_71 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_72 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_73 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_74 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_75 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_76 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_77 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_78 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_79 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_80 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_81 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_82 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_83 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_84 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_85 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_86 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_87 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_88 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_89 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_90 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_91 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_92 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_93 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_94 -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_WORLD_95 -> SDL_SCANCODE_UNKNOWN */
        0x0062u, /* SDLK_KP0 -> SDL_SCANCODE_KP_0 */
        0x0059u, /* SDLK_KP1 -> SDL_SCANCODE_KP_1 */
        0x005au, /* SDLK_KP2 -> SDL_SCANCODE_KP_2 */
        0x005bu, /* SDLK_KP3 -> SDL_SCANCODE_KP_3 */
        0x005cu, /* SDLK_KP4 -> SDL_SCANCODE_KP_4 */
        0x005du, /* SDLK_KP5 -> SDL_SCANCODE_KP_5 */
        0x005eu, /* SDLK_KP6 -> SDL_SCANCODE_KP_6 */
        0x005fu, /* SDLK_KP7 -> SDL_SCANCODE_KP_7 */
        0x0060u, /* SDLK_KP8 -> SDL_SCANCODE_KP_8 */
        0x0061u, /* SDLK_KP9 -> SDL_SCANCODE_KP_9 */
        0x0063u, /* SDLK_KP_PERIOD -> SDL_SCANCODE_KP_PERIOD */
        0x0054u, /* SDLK_KP_DIVIDE -> SDL_SCANCODE_KP_DIVIDE */
        0x0055u, /* SDLK_KP_MULTIPLY -> SDL_SCANCODE_KP_MULTIPLY */
        0x0056u, /* SDLK_KP_MINUS -> SDL_SCANCODE_KP_MINUS */
        0x0057u, /* SDLK_KP_PLUS -> SDL_SCANCODE_KP_PLUS */
        0x0058u, /* SDLK_KP_ENTER -> SDL_SCANCODE_KP_ENTER */
        0x0067u, /* SDLK_KP_EQUALS -> SDL_SCANCODE_KP_EQUALS */
        0x0052u, /* SDLK_UP -> SDL_SCANCODE_UP */
        0x0051u, /* SDLK_DOWN -> SDL_SCANCODE_DOWN */
        0x004fu, /* SDLK_RIGHT -> SDL_SCANCODE_RIGHT */
        0x0050u, /* SDLK_LEFT -> SDL_SCANCODE_LEFT */
        0x0049u, /* SDLK_INSERT -> SDL_SCANCODE_INSERT */
        0x004au, /* SDLK_HOME -> SDL_SCANCODE_HOME */
        0x004du, /* SDLK_END -> SDL_SCANCODE_END */
        0x004bu, /* SDLK_PAGEUP -> SDL_SCANCODE_PAGEUP */
        0x004eu, /* SDLK_PAGEDOWN -> SDL_SCANCODE_PAGEDOWN */
        0x003au, /* SDLK_F1 -> SDL_SCANCODE_F1 */
        0x003bu, /* SDLK_F2 -> SDL_SCANCODE_F2 */
        0x003cu, /* SDLK_F3 -> SDL_SCANCODE_F3 */
        0x003du, /* SDLK_F4 -> SDL_SCANCODE_F4 */
        0x003eu, /* SDLK_F5 -> SDL_SCANCODE_F5 */
        0x003fu, /* SDLK_F6 -> SDL_SCANCODE_F6 */
        0x0040u, /* SDLK_F7 -> SDL_SCANCODE_F7 */
        0x0041u, /* SDLK_F8 -> SDL_SCANCODE_F8 */
        0x0042u, /* SDLK_F9 -> SDL_SCANCODE_F9 */
        0x0043u, /* SDLK_F10 -> SDL_SCANCODE_F10 */
        0x0044u, /* SDLK_F11 -> SDL_SCANCODE_F11 */
        0x0045u, /* SDLK_F12 -> SDL_SCANCODE_F12 */
        0x0068u, /* SDLK_F13 -> SDL_SCANCODE_F13 */
        0x0069u, /* SDLK_F14 -> SDL_SCANCODE_F14 */
        0x006au, /* SDLK_F15 -> SDL_SCANCODE_F15 */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* unassigned -> SDL_SCANCODE_UNKNOWN */
        0x0053u, /* SDLK_NUMLOCK -> SDL_SCANCODE_NUMLOCKCLEAR */
        0x0039u, /* SDLK_CAPSLOCK -> SDL_SCANCODE_CAPSLOCK */
        0x0000u, /* SDLK_SCROLLOCK -> SDL_SCANCODE_UNKNOWN */
        0x00e5u, /* SDLK_RSHIFT -> SDL_SCANCODE_RSHIFT */
        0x00e1u, /* SDLK_LSHIFT -> SDL_SCANCODE_LSHIFT */
        0x00e4u, /* SDLK_RCTRL -> SDL_SCANCODE_RCTRL */
        0x00e0u, /* SDLK_LCTRL -> SDL_SCANCODE_LCTRL */
        0x00e6u, /* SDLK_RALT -> SDL_SCANCODE_RALT */
        0x00e2u, /* SDLK_LALT -> SDL_SCANCODE_LALT */
        0x0000u, /* SDLK_RMETA -> SDL_SCANCODE_UNKNOWN */
        0x0000u, /* SDLK_LMETA -> SDL_SCANCODE_UNKNOWN */
        0x00e3u, /* SDLK_LSUPER -> SDL_SCANCODE_LGUI */
        0x00e7u, /* SDLK_RSUPER -> SDL_SCANCODE_RGUI */
        0x0101u, /* SDLK_MODE -> SDL_SCANCODE_MODE */
        0x0000u, /* SDLK_COMPOSE -> SDL_SCANCODE_UNKNOWN */
        0x0075u, /* SDLK_HELP -> SDL_SCANCODE_HELP */
        0x0000u, /* SDLK_PRINT -> SDL_SCANCODE_UNKNOWN */
        0x009au, /* SDLK_SYSREQ -> SDL_SCANCODE_SYSREQ */
        0x0000u, /* SDLK_BREAK -> SDL_SCANCODE_UNKNOWN */
        0x0076u, /* SDLK_MENU -> SDL_SCANCODE_MENU */
        0x0066u, /* SDLK_POWER -> SDL_SCANCODE_POWER */
        0x0000u, /* SDLK_EURO -> SDL_SCANCODE_UNKNOWN */
        0x007au, /* SDLK_UNDO -> SDL_SCANCODE_UNDO */
    };

    if (keysym >= ARRAY_SIZE(keysym2scancode)) {
        printf("here\n");
        return 0;
    }
    return keysym2scancode[keysym];
}

uint16_t sdl_scancode2keysym(uint16_t scancode)
{
    static const uint16_t scancode2keysym[285] = {
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0061u, /* SDL_SCANCODE_A -> SDLK_a */
        0x0062u, /* SDL_SCANCODE_B -> SDLK_b */
        0x0063u, /* SDL_SCANCODE_C -> SDLK_c */
        0x0064u, /* SDL_SCANCODE_D -> SDLK_d */
        0x0065u, /* SDL_SCANCODE_E -> SDLK_e */
        0x0066u, /* SDL_SCANCODE_F -> SDLK_f */
        0x0067u, /* SDL_SCANCODE_G -> SDLK_g */
        0x0068u, /* SDL_SCANCODE_H -> SDLK_h */
        0x0069u, /* SDL_SCANCODE_I -> SDLK_i */
        0x006au, /* SDL_SCANCODE_J -> SDLK_j */
        0x006bu, /* SDL_SCANCODE_K -> SDLK_k */
        0x006cu, /* SDL_SCANCODE_L -> SDLK_l */
        0x006du, /* SDL_SCANCODE_M -> SDLK_m */
        0x006eu, /* SDL_SCANCODE_N -> SDLK_n */
        0x006fu, /* SDL_SCANCODE_O -> SDLK_o */
        0x0070u, /* SDL_SCANCODE_P -> SDLK_p */
        0x0071u, /* SDL_SCANCODE_Q -> SDLK_q */
        0x0072u, /* SDL_SCANCODE_R -> SDLK_r */
        0x0073u, /* SDL_SCANCODE_S -> SDLK_s */
        0x0074u, /* SDL_SCANCODE_T -> SDLK_t */
        0x0075u, /* SDL_SCANCODE_U -> SDLK_u */
        0x0076u, /* SDL_SCANCODE_V -> SDLK_v */
        0x0077u, /* SDL_SCANCODE_W -> SDLK_w */
        0x0078u, /* SDL_SCANCODE_X -> SDLK_x */
        0x0079u, /* SDL_SCANCODE_Y -> SDLK_y */
        0x007au, /* SDL_SCANCODE_Z -> SDLK_z */
        0x0031u, /* SDL_SCANCODE_1 -> SDLK_1 */
        0x0032u, /* SDL_SCANCODE_2 -> SDLK_2 */
        0x0033u, /* SDL_SCANCODE_3 -> SDLK_3 */
        0x0034u, /* SDL_SCANCODE_4 -> SDLK_4 */
        0x0035u, /* SDL_SCANCODE_5 -> SDLK_5 */
        0x0036u, /* SDL_SCANCODE_6 -> SDLK_6 */
        0x0037u, /* SDL_SCANCODE_7 -> SDLK_7 */
        0x0038u, /* SDL_SCANCODE_8 -> SDLK_8 */
        0x0039u, /* SDL_SCANCODE_9 -> SDLK_9 */
        0x0030u, /* SDL_SCANCODE_0 -> SDLK_0 */
        0x000du, /* SDL_SCANCODE_RETURN -> SDLK_RETURN */
        0x001bu, /* SDL_SCANCODE_ESCAPE -> SDLK_ESCAPE */
        0x0008u, /* SDL_SCANCODE_BACKSPACE -> SDLK_BACKSPACE */
        0x0009u, /* SDL_SCANCODE_TAB -> SDLK_TAB */
        0x0020u, /* SDL_SCANCODE_SPACE -> SDLK_SPACE */
        0x002du, /* SDL_SCANCODE_MINUS -> SDLK_MINUS */
        0x003du, /* SDL_SCANCODE_EQUALS -> SDLK_EQUALS */
        0x005bu, /* SDL_SCANCODE_LEFTBRACKET -> SDLK_LEFTBRACKET */
        0x005du, /* SDL_SCANCODE_RIGHTBRACKET -> SDLK_RIGHTBRACKET */
        0x005cu, /* SDL_SCANCODE_BACKSLASH -> SDLK_BACKSLASH */
        0x0000u, /* SDL_SCANCODE_NONUSHASH -> SDLK_UNKNOWN */
        0x003bu, /* SDL_SCANCODE_SEMICOLON -> SDLK_SEMICOLON */
        0x0000u, /* SDL_SCANCODE_APOSTROPHE -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_GRAVE -> SDLK_UNKNOWN */
        0x002cu, /* SDL_SCANCODE_COMMA -> SDLK_COMMA */
        0x002eu, /* SDL_SCANCODE_PERIOD -> SDLK_PERIOD */
        0x002fu, /* SDL_SCANCODE_SLASH -> SDLK_SLASH */
        0x012du, /* SDL_SCANCODE_CAPSLOCK -> SDLK_CAPSLOCK */
        0x011au, /* SDL_SCANCODE_F1 -> SDLK_F1 */
        0x011bu, /* SDL_SCANCODE_F2 -> SDLK_F2 */
        0x011cu, /* SDL_SCANCODE_F3 -> SDLK_F3 */
        0x011du, /* SDL_SCANCODE_F4 -> SDLK_F4 */
        0x011eu, /* SDL_SCANCODE_F5 -> SDLK_F5 */
        0x011fu, /* SDL_SCANCODE_F6 -> SDLK_F6 */
        0x0120u, /* SDL_SCANCODE_F7 -> SDLK_F7 */
        0x0121u, /* SDL_SCANCODE_F8 -> SDLK_F8 */
        0x0122u, /* SDL_SCANCODE_F9 -> SDLK_F9 */
        0x0123u, /* SDL_SCANCODE_F10 -> SDLK_F10 */
        0x0124u, /* SDL_SCANCODE_F11 -> SDLK_F11 */
        0x0125u, /* SDL_SCANCODE_F12 -> SDLK_F12 */
        0x0000u, /* SDL_SCANCODE_PRINTSCREEN -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_SCROLLLOCK -> SDLK_UNKNOWN */
        0x0013u, /* SDL_SCANCODE_PAUSE -> SDLK_PAUSE */
        0x0115u, /* SDL_SCANCODE_INSERT -> SDLK_INSERT */
        0x0116u, /* SDL_SCANCODE_HOME -> SDLK_HOME */
        0x0118u, /* SDL_SCANCODE_PAGEUP -> SDLK_PAGEUP */
        0x007fu, /* SDL_SCANCODE_DELETE -> SDLK_DELETE */
        0x0117u, /* SDL_SCANCODE_END -> SDLK_END */
        0x0119u, /* SDL_SCANCODE_PAGEDOWN -> SDLK_PAGEDOWN */
        0x0113u, /* SDL_SCANCODE_RIGHT -> SDLK_RIGHT */
        0x0114u, /* SDL_SCANCODE_LEFT -> SDLK_LEFT */
        0x0112u, /* SDL_SCANCODE_DOWN -> SDLK_DOWN */
        0x0111u, /* SDL_SCANCODE_UP -> SDLK_UP */
        0x012cu, /* SDL_SCANCODE_NUMLOCKCLEAR -> SDLK_NUMLOCK */
        0x010bu, /* SDL_SCANCODE_KP_DIVIDE -> SDLK_KP_DIVIDE */
        0x010cu, /* SDL_SCANCODE_KP_MULTIPLY -> SDLK_KP_MULTIPLY */
        0x010du, /* SDL_SCANCODE_KP_MINUS -> SDLK_KP_MINUS */
        0x010eu, /* SDL_SCANCODE_KP_PLUS -> SDLK_KP_PLUS */
        0x010fu, /* SDL_SCANCODE_KP_ENTER -> SDLK_KP_ENTER */
        0x0101u, /* SDL_SCANCODE_KP_1 -> SDLK_KP1 */
        0x0102u, /* SDL_SCANCODE_KP_2 -> SDLK_KP2 */
        0x0103u, /* SDL_SCANCODE_KP_3 -> SDLK_KP3 */
        0x0104u, /* SDL_SCANCODE_KP_4 -> SDLK_KP4 */
        0x0105u, /* SDL_SCANCODE_KP_5 -> SDLK_KP5 */
        0x0106u, /* SDL_SCANCODE_KP_6 -> SDLK_KP6 */
        0x0107u, /* SDL_SCANCODE_KP_7 -> SDLK_KP7 */
        0x0108u, /* SDL_SCANCODE_KP_8 -> SDLK_KP8 */
        0x0109u, /* SDL_SCANCODE_KP_9 -> SDLK_KP9 */
        0x0100u, /* SDL_SCANCODE_KP_0 -> SDLK_KP0 */
        0x010au, /* SDL_SCANCODE_KP_PERIOD -> SDLK_KP_PERIOD */
        0x0000u, /* SDL_SCANCODE_NONUSBACKSLASH -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_APPLICATION -> SDLK_UNKNOWN */
        0x0140u, /* SDL_SCANCODE_POWER -> SDLK_POWER */
        0x0110u, /* SDL_SCANCODE_KP_EQUALS -> SDLK_KP_EQUALS */
        0x0126u, /* SDL_SCANCODE_F13 -> SDLK_F13 */
        0x0127u, /* SDL_SCANCODE_F14 -> SDLK_F14 */
        0x0128u, /* SDL_SCANCODE_F15 -> SDLK_F15 */
        0x0000u, /* SDL_SCANCODE_F16 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_F17 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_F18 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_F19 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_F20 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_F21 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_F22 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_F23 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_F24 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_EXECUTE -> SDLK_UNKNOWN */
        0x013bu, /* SDL_SCANCODE_HELP -> SDLK_HELP */
        0x013fu, /* SDL_SCANCODE_MENU -> SDLK_MENU */
        0x0000u, /* SDL_SCANCODE_SELECT -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_STOP -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_AGAIN -> SDLK_UNKNOWN */
        0x0142u, /* SDL_SCANCODE_UNDO -> SDLK_UNDO */
        0x0000u, /* SDL_SCANCODE_CUT -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_COPY -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_PASTE -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_FIND -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_MUTE -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_VOLUMEUP -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_VOLUMEDOWN -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_COMMA -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_EQUALSAS400 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_INTERNATIONAL1 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_INTERNATIONAL2 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_INTERNATIONAL3 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_INTERNATIONAL4 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_INTERNATIONAL5 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_INTERNATIONAL6 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_INTERNATIONAL7 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_INTERNATIONAL8 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_INTERNATIONAL9 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_LANG1 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_LANG2 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_LANG3 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_LANG4 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_LANG5 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_LANG6 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_LANG7 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_LANG8 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_LANG9 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_ALTERASE -> SDLK_UNKNOWN */
        0x013du, /* SDL_SCANCODE_SYSREQ -> SDLK_SYSREQ */
        0x0000u, /* SDL_SCANCODE_CANCEL -> SDLK_UNKNOWN */
        0x000cu, /* SDL_SCANCODE_CLEAR -> SDLK_CLEAR */
        0x0000u, /* SDL_SCANCODE_PRIOR -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_RETURN2 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_SEPARATOR -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_OUT -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_OPER -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_CLEARAGAIN -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_CRSEL -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_EXSEL -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_00 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_000 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_THOUSANDSSEPARATOR -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_DECIMALSEPARATOR -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_CURRENCYUNIT -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_CURRENCYSUBUNIT -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_LEFTPAREN -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_RIGHTPAREN -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_LEFTBRACE -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_RIGHTBRACE -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_TAB -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_BACKSPACE -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_A -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_B -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_C -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_D -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_E -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_F -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_XOR -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_POWER -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_PERCENT -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_LESS -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_GREATER -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_AMPERSAND -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_DBLAMPERSAND -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_VERTICALBAR -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_DBLVERTICALBAR -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_COLON -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_HASH -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_SPACE -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_AT -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_EXCLAM -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_MEMSTORE -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_MEMRECALL -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_MEMCLEAR -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_MEMADD -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_MEMSUBTRACT -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_MEMMULTIPLY -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_MEMDIVIDE -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_PLUSMINUS -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_CLEAR -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_CLEARENTRY -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_BINARY -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_OCTAL -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_DECIMAL -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KP_HEXADECIMAL -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0132u, /* SDL_SCANCODE_LCTRL -> SDLK_LCTRL */
        0x0130u, /* SDL_SCANCODE_LSHIFT -> SDLK_LSHIFT */
        0x0134u, /* SDL_SCANCODE_LALT -> SDLK_LALT */
        0x0137u, /* SDL_SCANCODE_LGUI -> SDLK_LSUPER */
        0x0131u, /* SDL_SCANCODE_RCTRL -> SDLK_RCTRL */
        0x012fu, /* SDL_SCANCODE_RSHIFT -> SDLK_RSHIFT */
        0x0133u, /* SDL_SCANCODE_RALT -> SDLK_RALT */
        0x0138u, /* SDL_SCANCODE_RGUI -> SDLK_RSUPER */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0000u, /* unassigned -> SDLK_UNKNOWN */
        0x0139u, /* SDL_SCANCODE_MODE -> SDLK_MODE */
        0x0000u, /* SDL_SCANCODE_AUDIONEXT -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_AUDIOPREV -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_AUDIOSTOP -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_AUDIOPLAY -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_AUDIOMUTE -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_MEDIASELECT -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_WWW -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_MAIL -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_CALCULATOR -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_COMPUTER -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_AC_SEARCH -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_AC_HOME -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_AC_BACK -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_AC_FORWARD -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_AC_STOP -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_AC_REFRESH -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_AC_BOOKMARKS -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_BRIGHTNESSDOWN -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_BRIGHTNESSUP -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_DISPLAYSWITCH -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KBDILLUMTOGGLE -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KBDILLUMDOWN -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_KBDILLUMUP -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_EJECT -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_SLEEP -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_APP1 -> SDLK_UNKNOWN */
        0x0000u, /* SDL_SCANCODE_APP2 -> SDLK_UNKNOWN */
    };

    if (scancode >= ARRAY_SIZE(scancode2keysym))
        return 0;
    return scancode2keysym[scancode];
}

void usage(char *name)
{
    fprintf(stderr, "%s [key2scancode|scancode2key] [key|scancode]\n", name);
    exit(1);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
        usage(argv[0]);

    uint16_t arg = (uint16_t)strtol(argv[2], NULL, 16);
    uint16_t result = 0;
    if (strcmp(argv[1], "key2scancode") == 0)
        result = sdl_keysym2scancode(arg);
    else if (strcmp(argv[1], "scancode2key") == 0)
        result = sdl_scancode2keysym(arg);
    else
        usage(argv[0]);

    unsigned short result_us = (unsigned short)result;
    printf("%u\n", result_us);
}
