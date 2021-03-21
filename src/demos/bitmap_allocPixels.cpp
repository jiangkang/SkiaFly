//
// Created by 姜康 on 2021/3/21.
//

#include "demo.h"
#include "include/core/SkBitmap.h"
#include "include/core/SkImageInfo.h"
#include "include/core/SkColor.h"
#include "utils/file_utils.h"


void drawDemoAlt() {
    SkBitmap bitmap;
    bitmap.setInfo(SkImageInfo::MakeN32(640, 640, kOpaque_SkAlphaType));
    bitmap.allocPixels();

    SkCanvas offscreen(bitmap);
    offscreen.clear(SK_ColorWHITE);

    SkPaint paint;
    paint.setAntiAlias(true);
    for (int i = 0; i <= bitmap.width(); i = i + bitmap.width() / 10) {
        for (int j = 0; j <= bitmap.height(); j = j + bitmap.height() / 10) {
            float rRatio = (float) i / (float) bitmap.width();
            float gRatio = (float) j / (float) bitmap.height();
            float bRatio = (float) (i + j) / (float) (bitmap.width() + bitmap.height());
            paint.setColor(SkColorSetRGB(255 * rRatio, 255 * gRatio, 255 * bRatio));
            offscreen.drawCircle(i, j, 16, paint);
        }
    }
    saveBitmapAsPng("bitmap_allocPixels_alt.png", bitmap);
}

/*
 * 创建Bitmap的方法
 */
void drawDemo() {
    // 创建Bitmap
//    SkBitmap bitmap;
//    SkImageInfo imageInfo = SkImageInfo::MakeN32(600, 320, kOpaque_SkAlphaType);
//    bitmap.allocPixels(imageInfo, imageInfo.width() * imageInfo.bytesPerPixel());
//
//    //Canva绘制
//    SkCanvas offscreen(bitmap);
//    offscreen.clear(SK_ColorWHITE);
//    SkPaint paint;
//    paint.setStrokeWidth(2);
//    paint.setAntiAlias(true);
//    paint.setColor(SK_ColorRED);
//    for (int y : {100, 200, 300, 400, 500}) {
//        offscreen.drawLine(0, y, 600, y, paint);
//    }
//    // 保存文件
//    saveBitmapAsPng("bitmap_allocPixels.png", bitmap);

    drawDemoAlt();
}


