#include "tf_thread.h"
#include "examples/hello_world/hello_world.h"
/* TF Thread entry function */
/* pvParameters contains TaskHandle_t */
void tf_thread_entry(void *pvParameters)
{
    FSP_PARAMETER_NOT_USED (pvParameters);
    init_inference();
    /* TODO: add your own code here */
    while (1)
    {
        run_inference();
        vTaskDelay(50);
    }
}
