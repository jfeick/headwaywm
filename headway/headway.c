#define _POSIX_C_SOURCE 200809L
#include <assert.h>
#include <stdio.h>
#include <wayland-server.h>
#include "server.h"
#include "output.h"

int main(int argc, char* argv[])
{
    struct headway_server server;
    headway_server_init(&server);
    wl_display_run(server.wl_display);
    wl_display_destroy(server.wl_display);
    return 0;
}
