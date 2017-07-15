#include "stdio.h"

#define __msg(...)    		(printf("MSG:L%d(%s):", __LINE__, __FILE__),  printf(__VA_ARGS__))

typedef char                    CHAR;   // By default, char is unsigned. It can be changed to signed by compiler option
typedef unsigned char           BOOLEAN;
typedef unsigned char           INT8U;
typedef signed   char           INT8S;
typedef unsigned short          INT16U;
typedef signed   short          INT16S;
typedef unsigned int            INT32U;
typedef signed   int            INT32S;
typedef float                   FP32;
typedef	long long		INT64S;	
typedef	unsigned long long	INT64U;	
typedef double                  FP64;

typedef struct my_AviEncVidPara_s
{
    INT8U   sensor_do_init;
    INT8U   dwScale;				// dwScale
    INT8U   dwRate;					// dwRate 
    // Display 
    INT16U  display_width;          
    INT16U  display_height;   
    INT16U  quality_value;			// video encode quality
    INT16U  encode_width;           // video encode width
    INT16U  encode_height;          // videoe ncode height
    INT16U  enter_ap_mode;
    INT16U  sensor_width;
    INT16U  sensor_height; 	
    INT16U  clip_width;
    INT16U  clip_height; 	
	// Sensor
	INT32U 	sensor_frame_addrs;


    INT32U  video_format;			// video encode format
    
}my_AviEncVidPara_t;

typedef enum
{
	CTRL = 1,
	SHIFT = 2,
	ALT = 4,
}operate;


int main(int argc, char **argv)
{
	//my_AviEncVidPara_t myAviEncPra;
	operate myop = CTRL;
	//__msg("sizeof(myAviEncPra = %d)\n", sizeof(myAviEncPra));
	//__msg("%d, %d\n", sizeof(myop),myop | SHIFT | ALT);

	myop = 0x06;
	__msg("(myop & CTRL):%d\n", (myop & CTRL));
	__msg("(myop & SHIFT):%d\n", (myop & SHIFT));
	__msg("(myop & ALT):%d\n", (myop & ALT));
	
	if((myop & CTRL)&&(myop & SHIFT)&&(myop & ALT))
	{
		__msg("Continue press ctrl, shilt and alt key\n");
	}
	else
	{
		__msg("Break\n");
	}
	return 0;
}
