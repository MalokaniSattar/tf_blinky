#include "ble_thread.h"

extern "C" void app_main(void);

/* BLE Thread entry function */
/* pvParameters contains TaskHandle_t */
void ble_thread_entry(void *pvParameters)
{
    FSP_PARAMETER_NOT_USED (pvParameters);

    /* TODO: add your own code here */
    while (1)
    {
        app_main();
        vTaskDelay (1);
    }
}
