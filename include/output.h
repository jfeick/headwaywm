#ifndef HEADWAY_OUTPUT_H
#define HEADWAY_OUTPUT_H

#include <wayland-server.h>

struct headway_output {
    struct wlr_output *wlr_output;
    struct headway_server *server;
    
    struct wl_listener destroy;
    struct wl_listener frame;

    struct wl_list link;
};

void new_output_notify(struct wl_listener *listener, void *data);

#endif
