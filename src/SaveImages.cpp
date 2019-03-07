#include "tdp_image_utils/SaveImages.h"
#include "tdp_image_utils/Convert.h"

#include "tp_image_utils/ColorMap.h"

#include <QImage>
#include <QBuffer>

namespace tdp_image_utils
{

//##################################################################################################
void saveImage(const std::string& path, const tp_image_utils::ColorMap& image)
{
  QImage img = convertColorMapToQImage(image);
  img.save(QString::fromStdString(path));
}

//##################################################################################################
std::string saveImageToData(const tp_image_utils::ColorMap& image)
{
  return saveQImageToData(convertColorMapToQImage(image));
}

//##################################################################################################
std::string saveQImageToData(const QImage& img)
{
  QByteArray arr;
  {
    QBuffer buffer(&arr);
    buffer.open(QIODevice::WriteOnly);
    img.save(&buffer, "jpg", 100);
  }

  return arr.toStdString();
}

}
