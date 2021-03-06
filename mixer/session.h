/*
 * $Id$
 *
 * Copyright (c) 2012-2013, Juniper Networks, Inc.
 * All rights reserved.
 * This SOFTWARE is licensed under the LICENSE provided in the
 * ../Copyright file. By downloading, installing, copying, or otherwise
 * using the SOFTWARE, you agree to be bound by the terms of that
 * LICENSE.
 */

mx_sock_session_t *
mx_session_create (LIBSSH2_SESSION *session, int sock, const char *target,
		   const char *canonname);

void
mx_session_release_client (mx_sock_t *client);

int
mx_session_check_hostkey (mx_sock_session_t *mssp, mx_request_t *mrp);

int
mx_session_check_auth (mx_sock_session_t *mssp, mx_request_t *mrp);

mx_sock_session_t *
mx_session_open (mx_request_t *mrp);

mx_sock_session_t *
mx_session (mx_request_t *mrp);

void
mx_session_init (void);

int
mx_session_approve_hostkey (mx_sock_session_t *mssp, mx_request_t *mrp);
