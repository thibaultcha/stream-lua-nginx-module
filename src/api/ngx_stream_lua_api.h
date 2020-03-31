
/*
 * !!! DO NOT EDIT DIRECTLY !!!
 * This file was automatically generated from the following template:
 *
 * src/subsys/api/ngx_subsys_lua_api.h.tt2
 */


/*
 * Copyright (C) Yichun Zhang (agentzh)
 */


#ifndef _NGX_STREAM_LUA_API_H_INCLUDED_
#define _NGX_STREAM_LUA_API_H_INCLUDED_


#include <nginx.h>
#include <ngx_core.h>




#include <lua.h>
#include <stdint.h>


/* Public API for other Nginx modules */


#define ngx_stream_lua_version  8


typedef struct {
    uint8_t         type;

    union {
        int         b; /* boolean */
        lua_Number  n; /* number */
        ngx_str_t   s; /* string */
    } value;

} ngx_stream_lua_value_t;


typedef struct {
    int          len;
    /* this padding hole on 64-bit systems is expected */
    u_char      *data;
} ngx_stream_lua_ffi_str_t;


lua_State *ngx_stream_lua_get_global_state(ngx_conf_t *cf);

ngx_stream_lua_request_t *ngx_stream_lua_get_request(lua_State *L);

ngx_int_t ngx_stream_lua_add_package_preload(ngx_conf_t *cf,
    const char *package, lua_CFunction func);


#endif /* _NGX_STREAM_LUA_API_H_INCLUDED_ */

/* vi:set ft=c ts=4 sw=4 et fdm=marker: */
