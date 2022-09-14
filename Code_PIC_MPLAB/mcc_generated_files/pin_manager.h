/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.4
        Device            :  PIC18F26K40
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.20 and above
        MPLAB 	          :  MPLAB X 5.40	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set Temp_LED aliases
#define Temp_LED_TRIS                 TRISAbits.TRISA0
#define Temp_LED_LAT                  LATAbits.LATA0
#define Temp_LED_PORT                 PORTAbits.RA0
#define Temp_LED_WPU                  WPUAbits.WPUA0
#define Temp_LED_OD                   ODCONAbits.ODCA0
#define Temp_LED_ANS                  ANSELAbits.ANSELA0
#define Temp_LED_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define Temp_LED_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define Temp_LED_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define Temp_LED_GetValue()           PORTAbits.RA0
#define Temp_LED_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define Temp_LED_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define Temp_LED_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define Temp_LED_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define Temp_LED_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define Temp_LED_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define Temp_LED_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define Temp_LED_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set Temp_Sensor aliases
#define Temp_Sensor_TRIS                 TRISAbits.TRISA1
#define Temp_Sensor_LAT                  LATAbits.LATA1
#define Temp_Sensor_PORT                 PORTAbits.RA1
#define Temp_Sensor_WPU                  WPUAbits.WPUA1
#define Temp_Sensor_OD                   ODCONAbits.ODCA1
#define Temp_Sensor_ANS                  ANSELAbits.ANSELA1
#define Temp_Sensor_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define Temp_Sensor_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define Temp_Sensor_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define Temp_Sensor_GetValue()           PORTAbits.RA1
#define Temp_Sensor_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define Temp_Sensor_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define Temp_Sensor_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define Temp_Sensor_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define Temp_Sensor_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define Temp_Sensor_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define Temp_Sensor_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define Temp_Sensor_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSELA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set BOTAO1 aliases
#define BOTAO1_TRIS                 TRISBbits.TRISB4
#define BOTAO1_LAT                  LATBbits.LATB4
#define BOTAO1_PORT                 PORTBbits.RB4
#define BOTAO1_WPU                  WPUBbits.WPUB4
#define BOTAO1_OD                   ODCONBbits.ODCB4
#define BOTAO1_ANS                  ANSELBbits.ANSELB4
#define BOTAO1_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define BOTAO1_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define BOTAO1_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define BOTAO1_GetValue()           PORTBbits.RB4
#define BOTAO1_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define BOTAO1_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define BOTAO1_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define BOTAO1_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define BOTAO1_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define BOTAO1_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define BOTAO1_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define BOTAO1_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSELB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set Lum_Buzz_Alarme aliases
#define Lum_Buzz_Alarme_TRIS                 TRISCbits.TRISC2
#define Lum_Buzz_Alarme_LAT                  LATCbits.LATC2
#define Lum_Buzz_Alarme_PORT                 PORTCbits.RC2
#define Lum_Buzz_Alarme_WPU                  WPUCbits.WPUC2
#define Lum_Buzz_Alarme_OD                   ODCONCbits.ODCC2
#define Lum_Buzz_Alarme_ANS                  ANSELCbits.ANSELC2
#define Lum_Buzz_Alarme_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define Lum_Buzz_Alarme_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define Lum_Buzz_Alarme_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define Lum_Buzz_Alarme_GetValue()           PORTCbits.RC2
#define Lum_Buzz_Alarme_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define Lum_Buzz_Alarme_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define Lum_Buzz_Alarme_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define Lum_Buzz_Alarme_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define Lum_Buzz_Alarme_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define Lum_Buzz_Alarme_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define Lum_Buzz_Alarme_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define Lum_Buzz_Alarme_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set Temp_LED_ALarme aliases
#define Temp_LED_ALarme_TRIS                 TRISCbits.TRISC3
#define Temp_LED_ALarme_LAT                  LATCbits.LATC3
#define Temp_LED_ALarme_PORT                 PORTCbits.RC3
#define Temp_LED_ALarme_WPU                  WPUCbits.WPUC3
#define Temp_LED_ALarme_OD                   ODCONCbits.ODCC3
#define Temp_LED_ALarme_ANS                  ANSELCbits.ANSELC3
#define Temp_LED_ALarme_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define Temp_LED_ALarme_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define Temp_LED_ALarme_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define Temp_LED_ALarme_GetValue()           PORTCbits.RC3
#define Temp_LED_ALarme_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define Temp_LED_ALarme_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define Temp_LED_ALarme_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define Temp_LED_ALarme_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define Temp_LED_ALarme_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define Temp_LED_ALarme_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define Temp_LED_ALarme_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define Temp_LED_ALarme_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set Luz_Sensor aliases
#define Luz_Sensor_TRIS                 TRISCbits.TRISC5
#define Luz_Sensor_LAT                  LATCbits.LATC5
#define Luz_Sensor_PORT                 PORTCbits.RC5
#define Luz_Sensor_WPU                  WPUCbits.WPUC5
#define Luz_Sensor_OD                   ODCONCbits.ODCC5
#define Luz_Sensor_ANS                  ANSELCbits.ANSELC5
#define Luz_Sensor_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define Luz_Sensor_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define Luz_Sensor_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define Luz_Sensor_GetValue()           PORTCbits.RC5
#define Luz_Sensor_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define Luz_Sensor_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define Luz_Sensor_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define Luz_Sensor_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define Luz_Sensor_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define Luz_Sensor_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define Luz_Sensor_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define Luz_Sensor_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSELC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSELC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSELC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF4 pin functionality
 * @Example
    IOCBF4_ISR();
 */
void IOCBF4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF4_SetInterruptHandler() method.
    This handler is called every time the IOCBF4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF4_SetInterruptHandler(IOCBF4_InterruptHandler);

*/
extern void (*IOCBF4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF4_SetInterruptHandler() method.
    This handler is called every time the IOCBF4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF4_SetInterruptHandler(IOCBF4_DefaultInterruptHandler);

*/
void IOCBF4_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/