#ifndef tdp_image_utils_Convert_h
#define tdp_image_utils_Convert_h

#include "tdp_image_utils/Globals.h"

class QImage;

namespace tp_image_utils
{
class ColorMap;
}

namespace tdp_image_utils
{

//##################################################################################################
tp_image_utils::ColorMap TDP_IMAGE_UTILS_SHARED_EXPORT convertQImageToColorMap(const QImage& image);

//##################################################################################################
QImage TDP_IMAGE_UTILS_SHARED_EXPORT convertColorMapToQImage(const tp_image_utils::ColorMap& colorMap);

}
#endif
