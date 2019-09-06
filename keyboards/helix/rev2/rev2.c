#include "helix.h"

/* definition to expand macro then apply to pragma message */
#define VALUE_TO_STRING(x) #x
#define VALUE(x) VALUE_TO_STRING(x)
#define VAR_NAME_VALUE(var) #var "="  VALUE(var)

#pragma message(VAR_NAME_VALUE(DRIVER_LED_TOTAL))

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    {       5,  4,  3,  2,  1,  0, NO_LED},
    {       6,  7,  8,  9, 10, 11, NO_LED},
    {      17, 16, 15, 14, 13, 12, NO_LED},
    {      18, 19, 20, 21, 22, 23, 24},
    {      31, 30, 29, 28, 27, 26, 25},
#if 0    
    {  NO_LED, 32, 33, 34, 35, 36, 37},
    {  NO_LED, 43, 42, 41, 40, 39, 38},
    {  NO_LED, 44, 45, 46, 47, 48, 49},
    {      56, 55, 54, 53, 52, 51, 50},
    {      57, 58, 59, 60, 61, 62, 63}
#endif
}, {
	// Left Hand Mapped Left to Right
    {   0,   0 }, {  14,   0 }, {  28,   0 }, {  42,   0 }, {  56,   0 }, {  70,   0 },
    {   0,  16 }, {  14,  16 }, {  28,  16 }, {  42,  16 }, {  56,  16 }, {  70,  16 },
    {   0,  32 }, {  14,  32 }, {  28,  32 }, {  42,  32 }, {  56,  32 }, {  70,  32 },
    {   0,  48 }, {  14,  48 }, {  28,  48 }, {  42,  48 }, {  56,  48 }, {  70,  48 }, {  98,  48 },
    {   0,  64 }, {  14,  64 }, {  28,  64 }, {  42,  64 }, {  56,  64 }, {  70,  45 }, {  98,  55 },
#if 0	// Left Hand Mapped Right tLeft
                  { 154,   0 }, { 168,   0 }, { 182,   0 }, { 196,   0 }, { 210,   0 }, { 224,   0 },
                  { 154,  16 }, { 168,  16 }, { 182,  16 }, { 196,  16 }, { 210,  16 }, { 224,  16 },
                  { 154,  32 }, { 168,  32 }, { 182,  32 }, { 196,  32 }, { 210,  32 }, { 224,  32 },
    { 140,  48 }, { 154,  48 }, { 168,  48 }, { 182,  48 }, { 196,  48 }, { 210,  48 }, { 224,  48 },
    { 140,  64 }, { 154,  64 }, { 168,  64 }, { 182,  64 }, { 196,  64 }, { 210,  45 }, { 224,  55 }
#endif
}, {
	// Left Hand Mapped Left to Right
    1, 4, 4, 4, 4, 4,
    1, 4, 4, 4, 4, 4,
    1, 4, 4, 4, 4, 4,
    1, 4, 4, 4, 4, 4, 4,
    1, 1, 1, 1, 1, 1, 1,
#if 0
	// Left Hand Mapped Right to Left
       4, 4, 4, 4, 4, 1,
       4, 4, 4, 4, 4, 1,
       4, 4, 4, 4, 4, 1,
    4, 4, 4, 4, 4, 4, 1,
    1, 1, 1, 1, 1, 1, 1
#endif
} };
#endif


#ifdef SSD1306OLED
#include "ssd1306.h"

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
	return process_record_gfx(keycode,record) && process_record_user(keycode, record);
}

void led_set_kb(uint8_t usb_led) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here
    //led_set_user(usb_led);
}
#endif

void matrix_init_kb(void) {

	matrix_init_user();
};

