#include <iostream>

#include "include/core/SkBitmap.h"
#include "include/core/SkCanvas.h"
#include "include/core/SkData.h"
#include "include/core/SkImageEncoder.h"
#include "src/utils/file_utils.h"

int main() {
    SkBitmap bitmap;
    bitmap.setInfo(SkImageInfo::Make(600, 600, kRGBA_8888_SkColorType, kOpaque_SkAlphaType));
    bitmap.allocPixels();
    SkCanvas canvas(bitmap);
    canvas.clear(SK_ColorWHITE);
    SkPaint paint;
    paint.setColor(SK_ColorRED);
    canvas.drawCircle(300, 300, 30,paint);
    saveBitmapAsPng("demo.png", bitmap);
    return 0;
}



