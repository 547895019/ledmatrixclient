#include <rtthread.h>
#include <finsh.h>

#include <ledmatrixclient.h>

int ledmatrixclient_test(int argc, char** argv)
{
    hello_func();

    return 0;
}
MSH_CMD_EXPORT(ledmatrixclient_test, ledmatrixclient API test);
