
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Files required for transport initialization. */
#include <coresrv/nk/transport-kos.h>
#include <coresrv/sl/sl_api.h>

/* EDL description of the LightsGPIO entity. */
#include <traffic_light/Diagnostics.edl.h>

#include <assert.h>




/* Diagnostics entry point. */
int main(void)
{


    fprintf(stderr, "Hello I'm Diagnostics!\n");

    
    while (true);

    return EXIT_SUCCESS;
}
