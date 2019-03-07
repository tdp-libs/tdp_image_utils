#ifndef tdp_image_utils_Globals_h
#define tdp_image_utils_Globals_h

#include "tp_utils/StringID.h"

#if defined(TDP_IMAGE_UTILS_LIBRARY)
#  define TDP_IMAGE_UTILS_SHARED_EXPORT TP_EXPORT
#else
#  define TDP_IMAGE_UTILS_SHARED_EXPORT TP_IMPORT
#endif

//##################################################################################################
//! Utils for using tp_image_utils in Qt
namespace tdp_image_utils
{
//##################################################################################################
//! Call this to install tdp_image_utils in tp_image_utils
void init();
}

#endif
