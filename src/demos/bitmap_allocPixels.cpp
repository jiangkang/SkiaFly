//
// Created by 姜康 on 2021/3/21.
//

#include "demo.h"
#include "include/core/SkBitmap.h"
#include "include/core/SkImageInfo.h"
#include "utils/file_utils.h"

/*
 *
 */
void drawDemo() {
    // 创建Bitmap
    SkBitmap bitmap;
    SkImageInfo imageInfo = SkImageInfo::Make(600, 320, kRGBA_8888_SkColorType, kOpaque_SkAlphaType);
    bitmap.allocPixels(imageInfo, imageInfo.width() * imageInfo.bytesPerPixel());

    //Canva绘制
    SkCanvas offscreen(bitmap);
    offscreen.clear(SK_ColorWHITE);
    SkPaint paint;
    paint.setStrokeWidth(2);
    paint.setAntiAlias(true);
    paint.setColor(SK_ColorRED);
    for (int y : {100, 200, 300, 400,500}) {
        offscreen.drawLine(0, y, 600, y, paint);
    }
    // 保存文件
    saveBitmapAsPng("bitmap_allocPixels.png", bitmap);
}