//
// Created by 姜康 on 2021/3/21.
//
#include "demo.h"
#include "include/core/SkBitmap.h"
#include "include/core/SkImage.h"
#include "include/core/SkData.h"
#include "include/core/SkCanvas.h"
#include "utils/file_utils.h"

void drawDemo() {
    SkBitmap bitmap;
    bitmap.setInfo(SkImageInfo::MakeN32(1080,1080,kOpaque_SkAlphaType));
    bitmap.allocPixels();

    SkCanvas canvas(bitmap);
    canvas.clear(SK_ColorWHITE);

    sk_sp<SkData> data = SkData::MakeFromFileName("../resources/city1.jpeg");
    sk_sp<SkImage> image = SkImage::MakeFromEncoded(data);
    if (image != nullptr) {
        canvas.drawImage(image, 100, 200);
    }

    saveBitmapAsPng("draw_local_image.png",bitmap);

}
