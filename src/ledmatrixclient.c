#include <rtthread.h>

int ledmatrixclient_func(void)
{
    rt_kprintf("ledmatrixclient RT-Thread!\n");
    return 0;
}

int ledmatrixclient_init(void)
{
    rt_kprintf("ledmatrixclient package initialized.\n");

    return 0;
}
INIT_APP_EXPORT(ledmatrixclient_init);
