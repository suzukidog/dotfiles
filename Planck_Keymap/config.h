/* Copyright 2015-2023 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifdef AUDIO_ENABLE
#    define STARTUP_SONG SONG(PLANCK_SOUND)
// #define STARTUP_SONG SONG(NO_SOUND)

#    define DEFAULT_LAYER_SONGS \
        { SONG(QWERTY_SOUND), SONG(COLEMAK_SOUND), SONG(DVORAK_SOUND) }
#endif

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
// #define MIDI_ADVANCED

/* マウス設定 */
#define MOUSEKEY_INERTIA // 慣性モード有効

#define MOUSEKEY_FRICTION      24  // キーを離した後、カーソルが停止する速さ

#define MOUSEKEY_DELAY          5   // 遅延をなくす（反応速度を上げる）
#define MOUSEKEY_INTERVAL       8   // 更新間隔を短くしてスムーズに（値を小さく）
#define MOUSEKEY_MAX_SPEED      7   //　最大速度
#define MOUSEKEY_TIME_TO_MAX    15  // 最大速度に達するまでの時間を長くして滑らかに

#define MOUSEKEY_WHEEL_DELAY    20      // ホイール遅延をなくす
#define MOUSEKEY_WHEEL_INTERVAL 100     // ホイールの更新間隔を短く
#define MOUSEKEY_WHEEL_MAX_SPEED 20     //　ホイール最大速度
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40   // ホイールの加速時間を長く
