#undef SYSROOT_SUFFIX_SPEC
#define SYSROOT_SUFFIX_SPEC "" \
"%{march=armv5te|mcpu=arm946e-s|mtune=arm946e-s|mcpu=arm968e-s|mtune=arm968e-s|mcpu=arm926ej-s|mtune=arm926ej-s|mcpu=arm10tdmi|mtune=arm10tdmi|mcpu=arm1020t|mtune=arm1020t|mcpu=arm1026ej-s|mtune=arm1026ej-s|mcpu=arm10e|mtune=arm10e|mcpu=arm1020e|mtune=arm1020e|mcpu=arm1022e|mtune=arm1022e:/armv5;" \
"march=armv6|mcpu=arm1136j-s|mtune=arm1136j-s|mcpu=arm1136jf-s|mtune=arm1136jf-s|mcpu=mpcore|mtune=mpcore|mcpu=mpcorenovfp|mtune=mpcorenovfp|mcpu=arm1156t2-s|mtune=ar1156t2-s|mcpu=arm1156t2f-s|mtune=arm1156t2f-s|mcpu=arm1176jz-s|mtune=arm1176jz-s|mcpu=arm1176jzf-s|mtune=arm1176jzf-s:" \
  "%{mfpu=vfp:"	\
  	"%{mfloat-abi=softfp:/armv6/softfp;" \
  	"mhard-float|mfloat-abi=hard:/armv6/hard;" \
  	":/armv6/softfp};" \
    ":/armv6/softfp};" \
"march=armv7-a|mcpu=cortex-a5|mtune=cortex-a5|mcpu=cortex-a8|mtune=cortex-a8:" \
  "%{mthumb:"	\
  	"%{mfpu=neon:"	\
  		"%{mfloat-abi=softfp:"	\
  			"%{mcpu=cortex-a9:/armv7-a/thumb/a9;"	\
  			":/armv7-a/thumb/softfp};"	\
  		"mhard-float|mfloat-abi=hard:/armv7-a/thumb/hard;"	\
  		":/armv7-a/thumb/softfp};"	\
  	":/armv7-a/thumb/softfp};"	\
  ":"	\
  	"%{mfpu=neon:"	\
  		"%{mfloat-abi=softfp:"	\
  			"%{mcpu=cortex-a9|mtune=cortex-a9:/armv7-a/arm/softfp/a9;"	\
  			":/armv7-a/arm/softfp/neon};"	\
  		"mhard-float|mfloat-abi=hard:"		\
  			"%{mcpu=cortex-a9|mtune=cortex-a9:/armv7-a/arm/hard/a9;"	\
  			":/armv7-a/arm/hard/neon};"	\
  		":/armv7-a/arm/softfp/neon};"	\
  	"mfpu=vfpv3:"	\
  		"%{mfloat-abi=softfp:/armv7-a/arm/softfp/vfpv3;"	\
  		"mhard-float|mfloat-abi=hard:/armv7-a/arm/hard/vfpv3;"	\
  		":/armv7-a/arm/softfp/vfpv3};"	\
  	":/armv7-a/default}};"	\
":/default}"
