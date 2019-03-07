#ifndef tdp_image_utils_SaveImages_h
#define tdp_image_utils_SaveImages_h

#include "tdp_image_utils/Globals.h"

class QImage;

namespace tp_image_utils
{
class ColorMap;
}

namespace tdp_image_utils
{

//##################################################################################################
void saveImage(const std::string& path, const tp_image_utils::ColorMap& image);

//##################################################################################################
std::string saveImageToData(const tp_image_utils::ColorMap& image);

//##################################################################################################
std::string saveQImageToData(const QImage& img);

}
#endif
