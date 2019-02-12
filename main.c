
#include "mcc_generated_files/mcc.h"

void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    IO_RB1_TRIS = 0; // lo defino como salida
    
    while (1)
    {
        IO_RB1_LAT = 1; // enciendo la salida
        // Add your application code
        // nuevo comentario
        //Vamo a pushar todo
    }
}
