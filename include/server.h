#ifndef HEADWAY_SERVER_H
#define HEADWAY_SERVER_H

#include <wayland-server.h>
#include <wlr/backend.h>
#include <wlr/types/wlr_compositor.h>


struct headway_server {
    struct wl_display *wl_display;
    struct wl_event_loop *wl_event_loop;

    struct wlr_backend *backend;
    struct wlr_compositor *compositor;

    struct wl_listener new_output;

    struct wl_list outputs;
};

extern struct headway_server server;

void headway_server_init(struct headway_server *server);

#endif
