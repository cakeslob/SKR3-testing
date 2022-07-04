#include "mbed.h"

#include "configuration.h"
#include "remora.h"

// drivers
#include "RemoraComms.h"

volatile rxData_t rxBuffer;
volatile rxData_t rxData;
volatile txData_t txData;

// pointers to data
volatile rxData_t*  ptrRxData = &rxData;
volatile txData_t*  ptrTxData = &txData;


RemoraComms comms(ptrRxData, ptrTxData, SPI1, PA_4);

// main() runs in its own thread in the OS
int main()
{
    while (true) {

    }
}

