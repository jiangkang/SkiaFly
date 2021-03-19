//
// Created by 姜康 on 2021/3/18.
//

#include <iostream>
#include "file_utils.h"
#include "include/core/SkData.h"
#include "include/core/SkImageEncoder.h"

void saveBitmapAsPng(const char *filename, SkBitmap skBitmap) {
    sk_sp<SkData> encodedData = SkEncodeBitmap(skBitmap, SkEncodedImageFormat::kPNG, 100);
    FILE *pFile = fopen(filename, "wb+");
    if (!pFile) {
        std::cerr << filename << "打开失败" << std::endl;
    } else {
        fwrite(encodedData->data(), encodedData->size(), 1, pFile);
        std::cout << "写入文件成功:" << filename << std::endl;
    }
}
