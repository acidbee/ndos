/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */


/*
 *  Copyright (C) 2002-2010  The DOSBox Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifdef IPHONEOS
#include <TargetConditionals.h>
#endif

/* IMGMAKE Patch for nDOS */
#define IMGMAKE_PATCH 1

/* Max memory patch */
#define MAX_MEMORY_PATCH 1

/* Additional DOS commands patch */
#define ADDITIONAL_DOS_COMMANDS_PATCH 1

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Compiling on BSD */
/* #undef BSD */

/* Determines if the compilers supports always_inline attribute. */
#define C_ATTRIBUTE_ALWAYS_INLINE 1

/* Determines if the compilers supports fastcall attribute. */
/* #undef C_ATTRIBUTE_FASTCALL */

/* Define to 1 to use inlined memory functions in cpu core */
/* #undef C_CORE_INLINE */

/* Define to 1 to enable internal debugger, requires libcurses */
/* #undef C_DEBUG */

/* Define to 1 if you want serial passthrough support (Win32, Posix and OS/2).
   */
//#define C_DIRECTSERIAL 1

/* Define to 1 to use x86 dynamic cpu core */
/* #undef C_DYNAMIC_X86 */

/* Define to 1 to use recompiling cpu core. Can not be used together with the
   dynamic-x86 core */
#ifndef __LP64__
#define C_DYNREC 1
#endif

/* Define to 1 to enable floating point emulation */
#define C_FPU 1

/* Define to 1 to use a x86 assembly fpu core */
/* #undef C_FPU_X86 */

/* Determines if the compilers supports attributes for structures. */
#define C_HAS_ATTRIBUTE 1

/* Determines if the compilers supports __builtin_expect for branch
   prediction. */
#define C_HAS_BUILTIN_EXPECT 1

/* Define to 1 if you have the mprotect function */
#define C_HAVE_MPROTECT 1

/* Define to 1 to enable heavy debugging, also have to enable C_DEBUG */
/* #undef C_HEAVY_DEBUG */

/* Define to 1 to enable IPX over Internet networking, requires SDL_net */
#define C_IPX 1

/* Define to 1 to enable internal modem support, requires SDL_net */
#define C_MODEM 1

/* Define to 1 to use opengl display output support */
//#define C_OPENGL 1

/* Define to 1 to enable SDL_sound support */
//#define C_SDL_SOUND 1

/* Define to 1 if you have setpriority support */
#define C_SET_PRIORITY 1

/* Define to 1 to enable screenshots, requires libpng */
/* #undef C_SSHOT */

/* The type of cpu this target has */
#if TARGET_IPHONE_SIMULATOR
#define C_TARGETCPU X86
#else
#if TARGET_CPU_ARM
#define C_TARGETCPU ARMV4LE
#endif
#endif

/* Define to 1 to use a unaligned memory access */
#define C_UNALIGNED_MEMORY 1

/* define to 1 if you have XKBlib.h and X11 lib */
/* #undef C_X11_XKB */

/* libm doesn't include powf */
/* #undef DB_HAVE_NO_POWF */

/* struct dirent has d_type */
#define DIRENT_HAS_D_TYPE 1

/* environ can be included */
/* #undef ENVIRON_INCLUDED */

/* environ can be linked */
#define ENVIRON_LINKED 1

/* Define to 1 to use ALSA for MIDI */
/* #undef HAVE_ALSA */

/* Define to 1 if you have the <ddraw.h> header file. */
/* #undef HAVE_DDRAW_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `asound' library (-lasound). */
/* #undef HAVE_LIBASOUND */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the `realpath' function. */
#define HAVE_REALPATH 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Compiling on GNU/Linux */
/* #undef LINUX */

/* Compiling on Mac OS X */
#define MACOSX 1

/* Compiling on OS/2 EMX */
/* #undef OS2 */

/* Name of package */
#define PACKAGE "dosbox"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "dosbox"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "dosbox SVN"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "dosbox"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "SVN"

/* The size of `int *', as computed by sizeof. */
#ifdef __LP64__
#define SIZEOF_INT_P 8
#else
#define SIZEOF_INT_P 4
#endif

/* The size of `unsigned char', as computed by sizeof. */
#define SIZEOF_UNSIGNED_CHAR 1

/* The size of `unsigned int', as computed by sizeof. */
#define SIZEOF_UNSIGNED_INT 4

/* The size of `unsigned long', as computed by sizeof. */
#ifdef __LP64__
#define SIZEOF_UNSIGNED_LONG 8
#else
#define SIZEOF_UNSIGNED_LONG 4
#endif

/* The size of `unsigned long long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG_LONG 8

/* The size of `unsigned short', as computed by sizeof. */
#define SIZEOF_UNSIGNED_SHORT 2

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Version number of package */
//#define VERSION "0.74-3"
#define VERSION "SVN"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int` if you don't have socklen_t */
/* #undef socklen_t */

#if C_ATTRIBUTE_ALWAYS_INLINE
#define INLINE inline __attribute__((always_inline))
#else
#define INLINE inline
#endif

#if C_ATTRIBUTE_FASTCALL
#define DB_FASTCALL __attribute__((fastcall))
#else
#define DB_FASTCALL
#endif

#if C_HAS_ATTRIBUTE
#define GCC_ATTRIBUTE(x) __attribute__ ((x))
#else
#define GCC_ATTRIBUTE(x) /* attribute not supported */
#endif

#if C_HAS_BUILTIN_EXPECT
#define GCC_UNLIKELY(x) __builtin_expect((x),0)
#define GCC_LIKELY(x) __builtin_expect((x),1)
#else
#define GCC_UNLIKELY(x) (x)
#define GCC_LIKELY(x) (x)
#endif


typedef         double     Real64;

#if SIZEOF_UNSIGNED_CHAR != 1
#  error "sizeof (unsigned char) != 1"
#else
  typedef unsigned char Bit8u;
  typedef   signed char Bit8s;
#endif

#if SIZEOF_UNSIGNED_SHORT != 2
#  error "sizeof (unsigned short) != 2"
#else
  typedef unsigned short Bit16u;
  typedef   signed short Bit16s;
#endif

#if SIZEOF_UNSIGNED_INT == 4
  typedef unsigned int Bit32u;
  typedef   signed int Bit32s;
#define sBit32t
#elif SIZEOF_UNSIGNED_LONG == 4
  typedef unsigned long Bit32u;
  typedef   signed long Bit32s;
#define sBit32t "l"
#else
#  error "can't find sizeof(type) of 4 bytes!"
#endif
#define sBit32fs(a) sBit32t #a

#if SIZEOF_UNSIGNED_LONG == 8
  typedef unsigned long Bit64u;
  typedef   signed long Bit64s;
#define sBit64t "l"
#elif SIZEOF_UNSIGNED_LONG_LONG == 8
  typedef unsigned long long Bit64u;
  typedef   signed long long Bit64s;
#define sBit64t "ll"
#else
#  error "can't find data type of 8 bytes"
#endif
#define sBit64fs(a) sBit64t #a

#if SIZEOF_INT_P == 4
  typedef Bit32u Bitu;
  typedef Bit32s Bits;
#define sBitfs sBit32fs
#else
  typedef Bit64u Bitu;
  typedef Bit64s Bits;
#define sBitfs sBit64fs
#endif


