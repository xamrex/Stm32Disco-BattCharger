// 4.20.0 0x7e480f1d
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_bg[]; // BITMAP_BG_ID = 0, Size: 327x245 pixels
extern const unsigned char image_blue_buttons_round_edge_small[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID = 1, Size: 170x60 pixels
extern const unsigned char image_blue_buttons_round_edge_small_pressed[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID = 2, Size: 170x60 pixels
extern const unsigned char image_counter_box[]; // BITMAP_COUNTER_BOX_ID = 3, Size: 152x43 pixels
extern const unsigned char image_dark_backgrounds_main_bg_texture_480x272px[]; // BITMAP_DARK_BACKGROUNDS_MAIN_BG_TEXTURE_480X272PX_ID = 4, Size: 480x272 pixels
extern const unsigned char image_dark_icons_down_arrow_32[]; // BITMAP_DARK_ICONS_DOWN_ARROW_32_ID = 5, Size: 32x19 pixels
extern const unsigned char image_dark_icons_up_arrow_32[]; // BITMAP_DARK_ICONS_UP_ARROW_32_ID = 6, Size: 32x19 pixels
extern const unsigned char image_rsz_close_button[]; // BITMAP_RSZ_CLOSE_BUTTON_ID = 7, Size: 65x28 pixels
extern const unsigned char image_rsz_close_button_pressed[]; // BITMAP_RSZ_CLOSE_BUTTON_PRESSED_ID = 8, Size: 65x28 pixels
extern const unsigned char image_rsz_info_icon[]; // BITMAP_RSZ_INFO_ICON_ID = 9, Size: 50x50 pixels
extern const unsigned char image_rsz_my_modal_background[]; // BITMAP_RSZ_MY_MODAL_BACKGROUND_ID = 10, Size: 170x120 pixels
extern const unsigned char image_rsz_toggle_re_small_button_off[]; // BITMAP_RSZ_TOGGLE_RE_SMALL_BUTTON_OFF_ID = 11, Size: 72x29 pixels
extern const unsigned char image_rsz_toggle_re_small_button_on[]; // BITMAP_RSZ_TOGGLE_RE_SMALL_BUTTON_ON_ID = 12, Size: 72x29 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_bg, 0, 327, 245, 0, 0, 327, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 245, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_blue_buttons_round_edge_small, 0, 170, 60, 11, 4, 148, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_edge_small_pressed, 0, 170, 60, 11, 4, 148, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_counter_box, 0, 152, 43, 0, 0, 152, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 43, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_dark_backgrounds_main_bg_texture_480x272px, 0, 480, 272, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 272, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_dark_icons_down_arrow_32, 0, 32, 19, 12, 10, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 4, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_dark_icons_up_arrow_32, 0, 32, 19, 12, 3, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 4, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_rsz_close_button, 0, 65, 28, 5, 0, 55, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 28, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_rsz_close_button_pressed, 0, 65, 28, 5, 0, 55, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 28, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_rsz_info_icon, 0, 50, 50, 11, 9, 28, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 30, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_rsz_my_modal_background, 0, 170, 120, 6, 0, 158, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 120, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_rsz_toggle_re_small_button_off, 0, 72, 29, 6, 0, 60, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 29, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_rsz_toggle_re_small_button_on, 0, 72, 29, 6, 0, 60, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 29, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
