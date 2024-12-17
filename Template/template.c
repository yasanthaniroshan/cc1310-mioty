#include <stdio.h>
#include "contiki.h"

PROCESS(basic,"Template Function");
AUTOSTART_PROCESSES(&basic);

PROCESS_THREAD(basic,ev,data)
{
    PROCESS_BEGIN();
    // Implementation
    PROCESS_END();
}

