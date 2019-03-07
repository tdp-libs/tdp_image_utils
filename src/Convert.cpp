#include "tdp_image_utils/SaveImages.h"

#include "tp_image_utils/ColorMap.h"

#include <QImage>

namespace tdp_image_utils
{

//##################################################################################################
tp_image_utils::ColorMap TDP_IMAGE_UTILS_SHARED_EXPORT convertQImageToColorMap(const QImage& image)
{
  QImage img = image.convertToFormat(QImage::Format_ARGB32);
  tp_image_utils::ColorMap colorMap(size_t(img.width()), size_t(img.height()));

  TPPixel* dst = colorMap.data();
  for(int y=0; y<img.height(); y++)
  {
    const uchar* p = img.scanLine(y);
    const uchar* pMax = p + img.bytesPerLine();

    for(; p<pMax; p+=4, dst++)
    {
      dst->r = p[2];
      dst->g = p[1];
      dst->b = p[0];
      dst->a = p[3];
    }
  }

  return colorMap;
}

//##################################################################################################
QImage TDP_IMAGE_UTILS_SHARED_EXPORT convertColorMapToQImage(const tp_image_utils::ColorMap& colorMap)
{
  QImage img(int(colorMap.width()), int(colorMap.height()), QImage::Format_ARGB32);

  const TPPixel* src = colorMap.constData();
  for(int y=0; y<img.height(); y++)
  {
    uchar* p = img.scanLine(y);
    uchar* pMax = p + img.bytesPerLine();

    for(; p<pMax; p+=4, src++)
    {
      p[2] = src->r;
      p[1] = src->g;
      p[0] = src->b;
      p[3] = src->a;
    }
  }

  return img;
}

}
