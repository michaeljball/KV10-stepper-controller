/* ###################################################################
**     Filename    : main.c
**     Project     : KV10-Blink
**     Processor   : MKV10Z32VLF7
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-06-18, 12:08, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "clockMan1.h"
#include "pin_mux.h"
#include "osa1.h"
#include "gpio1.h"
#include "WAIT1.h"

#if CPU_INIT_CONFIG
  #include "Init_Config.h"
#endif
/* User includes (#include below this line is not maintained by Processor Expert) */
unsigned int state = 1;
bool stepflag = 0;




/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
  GPIO_DRV_ClearPinOutput(LED);		// Turn Status LED on
  GPIO_DRV_SetPinOutput(MTRA0);		// Initialize Stepper Coil A
  GPIO_DRV_SetPinOutput(MTRA1);		//
  GPIO_DRV_SetPinOutput(MTRB0);		// Initialize Stepper Coil B
  GPIO_DRV_SetPinOutput(MTRB0);		//

  GPIO_DRV_SetPinOutput(CNTL0);		// Initialize Stepper Enable 0
  GPIO_DRV_SetPinOutput(CNTL2);		// Initialize Stepper Enable 2



  for(;;){
	  if(stepflag == 1){
		  GPIO_DRV_TogglePinOutput(LED);
		  step();
	 // WAIT1_Waitms(100);
	  }
  }
  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

void step() {



	if(GPIO_DRV_ReadPinInput(DIR)==1){
		state--;
		if(state < 1) state = 8;
	} else {
		state++;
		if(state > 8) state = 1;
	}


	switch(state) {
	case 1:
		// 1010
      GPIO_DRV_SetPinOutput(MTRA0);		// Initialize Stepper Coil A
	  GPIO_DRV_ClearPinOutput(MTRA1);		//
	  GPIO_DRV_SetPinOutput(MTRB0);		// Initialize Stepper Coil B
	  GPIO_DRV_ClearPinOutput(MTRB1);		//
	  break;
	case 2:
		// 1000
      GPIO_DRV_SetPinOutput(MTRA0);		// Initialize Stepper Coil A
	  GPIO_DRV_ClearPinOutput(MTRA1);		//
	  GPIO_DRV_ClearPinOutput(MTRB0);		// Initialize Stepper Coil B
	  GPIO_DRV_ClearPinOutput(MTRB1);		//
	  break;
	case 3:
		// 1001
      GPIO_DRV_SetPinOutput(MTRA0);		// Initialize Stepper Coil A
	  GPIO_DRV_ClearPinOutput(MTRA1);		//
	  GPIO_DRV_ClearPinOutput(MTRB0);		// Initialize Stepper Coil B
	  GPIO_DRV_SetPinOutput(MTRB1);		//
	  break;
	case 4:
		// 0001
      GPIO_DRV_ClearPinOutput(MTRA0);		// Initialize Stepper Coil A
	  GPIO_DRV_ClearPinOutput(MTRA1);		//
	  GPIO_DRV_ClearPinOutput(MTRB0);		// Initialize Stepper Coil B
	  GPIO_DRV_SetPinOutput(MTRB1);		//
	  break;
	case 5:
		// 0101
      GPIO_DRV_ClearPinOutput(MTRA0);		// Initialize Stepper Coil A
	  GPIO_DRV_SetPinOutput(MTRA1);		//
	  GPIO_DRV_ClearPinOutput(MTRB0);		// Initialize Stepper Coil B
	  GPIO_DRV_SetPinOutput(MTRB1);		//
	  break;
	case 6:
		// 0100
      GPIO_DRV_ClearPinOutput(MTRA0);		// Initialize Stepper Coil A
	  GPIO_DRV_SetPinOutput(MTRA1);		//
	  GPIO_DRV_ClearPinOutput(MTRB0);		// Initialize Stepper Coil B
	  GPIO_DRV_ClearPinOutput(MTRB1);		//
	  break;
	case 7:
		// 0110
      GPIO_DRV_ClearPinOutput(MTRA0);		// Initialize Stepper Coil A
	  GPIO_DRV_SetPinOutput(MTRA1);		//
	  GPIO_DRV_SetPinOutput(MTRB0);		// Initialize Stepper Coil B
	  GPIO_DRV_ClearPinOutput(MTRB1);		//
	  break;
	case 8:
		// 0010
      GPIO_DRV_ClearPinOutput(MTRA0);		// Initialize Stepper Coil A
	  GPIO_DRV_ClearPinOutput(MTRA1);		//
	  GPIO_DRV_SetPinOutput(MTRB0);		// Initialize Stepper Coil B
	  GPIO_DRV_ClearPinOutput(MTRB1);		//
	  break;
	}
	stepflag = 0;
}

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
