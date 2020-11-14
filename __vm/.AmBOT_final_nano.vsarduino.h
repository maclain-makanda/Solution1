/* 
	Editor: https://www.visualmicro.com/
			This file is for intellisense purpose only.
			Visual micro (and the arduino ide) ignore this code during compilation. This code is automatically maintained by visualmicro, manual changes to this file will be overwritten
			The contents of the _vm sub folder can be deleted prior to publishing a project
			All non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
			Note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Nano 33 BLE, Platform=mbed, Package=arduino-beta
*/

#if defined(_VMICRO_INTELLISENSE)

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define _VMDEBUG 1
#define ARDUINO_ARCH_NRF52840
#define ARDUINO 108010
#define ARDUINO_ARDUINO_NANO33BLE
#define ARDUINO_ARCH_MBED
#define __cplusplus 201103L
//#define __GNUC__ 2
#define _Pragma(x)
#define __ARMCC_VERSION 6010050

#define __PTRDIFF_TYPE__ int
#define __ARM__
#define __arm__
#define always_inline
#define __inline__
#define __asm__(x)
#define __attribute__(x)
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __volatile__
#define _Pragma(x)
#define __ASM
#define __INLINE




#include "arduino.h"
#include <mbed_config.h> 
#include <pinmode_arduino.h> 
#include <pins_arduino.h> 
#include <variant.cpp> 
#undef cli
#define cli()
#include "AmBOT_final_nano.ino"
#endif
#endif
