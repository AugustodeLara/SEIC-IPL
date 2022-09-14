/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.4
        Device            :  PIC18F26K40
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"

void myTimer0ISR(void) {
    int temp = Alarme_Temperatura();

    int lum = Alarme_Luminosidade();
}

/*
                         Main application
 */



int temperatura = 0;
int luminosidade = 0;

void Temperatura() {
    //vdc=5/10*10mv=50;
    //adc_bits=10;
    //bits = 2^10-1=2013;
    //resoluçao=1023/50=20.46

    ADCC_DischargeSampleCapacitor();
    ADCC_StartConversion(Temp_Sensor); // ADCC_StartConversion(SENSOR_Temp)
    PWM1_LoadDutyValue(149); // 15% duty-cycle
    while (ADCC_IsConversionDone() == 0) {
    }

    adc_result_t sensor_value = ADCC_GetConversionResult();
    temperatura = (int) sensor_value / 20.46;
    printf("#%d", temperatura);

}

void Luminosidade() {

    ADCC_DischargeSampleCapacitor();
    ADCC_StartConversion(Luz_Sensor); // ADCC_StartConversion(SENSOR_Temp)

    while (ADCC_IsConversionDone() == 0) {
    }


    adc_result_t luz = ADCC_GetConversionResult();
    luminosidade = (int) luz;

    printf("*%d", luminosidade);
}


int Alarme_Temperatura() {
    if (temperatura > 15 && temperatura < 30) {
        Temp_LED_SetHigh();
    } else {
        {
            Temp_LED_SetLow();

        }
        if (temperatura >= 30) {
            Temp_LED_ALarme_SetHigh();
            __delay_ms(500);
            Temp_LED_ALarme_SetLow();


        }
    }
}

int Alarme_Luminosidade() {
    if (luminosidade > 500) {
        Lum_Buzz_Alarme_SetHigh();
    } else {


        Lum_Buzz_Alarme_SetLow();
    }
    if (luminosidade < 500) {
        Lum_Buzz_Alarme_SetHigh();
        __delay_ms(500);
        Lum_Buzz_Alarme_SetLow();


    }
}

void main(void) {

    SYSTEM_Initialize();
    ADCC_Initialize();
    TMR0_SetInterruptHandler(myTimer0ISR);

    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();


    while (1) {


        Alarme_Temperatura();
        Alarme_Luminosidade();

        Temperatura();
        Luminosidade();

        while (EUSART1_DataReady) {
            uint8_t ch = EUSART1_Read() - 1;
            EUSART1_Write(ch);

        }

    }
}

/**
 End of File
 */