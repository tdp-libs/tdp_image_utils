TARGET = tdp_image_utils
TEMPLATE = lib

DEFINES += TDP_IMAGE_UTILS_LIBRARY

SOURCES += src/Globals.cpp
HEADERS += inc/tdp_image_utils/Globals.h

SOURCES += src/Convert.cpp
HEADERS += inc/tdp_image_utils/Convert.h

SOURCES += src/SaveImages.cpp
HEADERS += inc/tdp_image_utils/SaveImages.h

SOURCES += src/LoadImages.cpp
HEADERS += inc/tdp_image_utils/LoadImages.h

