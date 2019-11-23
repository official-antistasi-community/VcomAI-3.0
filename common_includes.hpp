#define STRINGIFY(s) #s

#define BUILD_VCOM_AS_ADDON 1

#ifdef BUILD_VCOM_AS_ADDON
#define VCOM_PREFIX \vcomai
#else
#define VCOM_PREFIX \vcom
#endif