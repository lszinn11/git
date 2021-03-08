#ifndef UNIX_SOCKET_H
#define UNIX_SOCKET_H

struct unix_stream_listen_opts {
	long timeout_ms;
	int listen_backlog_size;
	unsigned int disallow_chdir:1;
};

#define UNIX_STREAM_LISTEN_OPTS_INIT \
{ \
	.timeout_ms = 0, \
	.listen_backlog_size = 0, \
	.disallow_chdir = 0, \
}

int unix_stream_connect(const char *path, int disallow_chdir);
int unix_stream_listen(const char *path,
		       const struct unix_stream_listen_opts *opts);

#endif /* UNIX_SOCKET_H */
