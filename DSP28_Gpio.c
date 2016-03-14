


#include "DSP28_Device.h"



void InitGpio(void)
{

     EALLOW;
     
    
     GpioMuxRegs.GPAMUX.bit.PWM1_GPIOA0=1;     
     GpioMuxRegs.GPAMUX.bit.PWM2_GPIOA1=1;     

     GpioMuxRegs.GPAMUX.bit.PWM3_GPIOA2=1;     
     GpioMuxRegs.GPAMUX.bit.PWM4_GPIOA3=1;     

     GpioMuxRegs.GPAMUX.bit.PWM5_GPIOA4=1;     
     GpioMuxRegs.GPAMUX.bit.PWM6_GPIOA5=1;
	 
	 GpioMuxRegs.GPAMUX.bit.PWM1_GPIOA0=0;

     EDIS;

}	
	
//===========================================================================
// No more.
//===========================================================================
