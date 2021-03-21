//
// Created by 姜康 on 2021/3/21.
//

#include "demo.h"
#include "include/core/SkBitmap.h"
#include "include/core/SkImageInfo.h"
#include "include/core/SkFont.h"
#include "include/core/SkImage.h"
#include "utils/file_utils.h"


void drawDemo(){
    SkBitmap bitmap;
    bitmap.setInfo(SkImageInfo::MakeN32(640,640,kOpaque_SkAlphaType));
    bitmap.allocPixels();

    SkCanvas canvas(bitmap);
    canvas.clear(SK_ColorWHITE);

    SkPaint paint;
    paint.setAntiAlias(true);
    paint.setColor(SK_ColorBLUE);

    canvas.drawLine(SkPoint::Make(0,0),SkPoint::Make(640,640),paint);

    paint.setColor(SK_ColorBLACK);
    paint.setStrokeWidth(20);
    canvas.drawPoint(SkPoint::Make(320,320),paint);

    paint.setStrokeWidth(2);
    paint.setColor(SK_ColorRED);
    paint.setStyle(SkPaint::Style::kStroke_Style);
    canvas.drawCircle(320,320,32,paint);
    canvas.drawCircle(SkPoint::Make(320,320),64,paint);

    paint.setColor(SK_ColorRED);
    canvas.drawRect(SkRect::MakeXYWH(100,100,160,64),paint);
    canvas.drawRoundRect(SkRect::MakeXYWH(360,360,120,120),SkIntToScalar(10),SkIntToScalar(10),paint);

    paint.setStrokeWidth(1);
    SkFont font;
    font.setSize(SkIntToScalar(23));
    canvas.drawString("SkiaFly",200,200,font,paint);

    saveBitmapAsPng("draw_basic_shape.png",bitmap);
}
