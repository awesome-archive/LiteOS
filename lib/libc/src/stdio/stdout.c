#include "stdio_impl.h"

#undef stdout

static unsigned char buf[BUFSIZ+UNGET];
hidden FILE __stdout_FILE = {
	.buf = buf+UNGET,
	.buf_size = sizeof buf-UNGET,
	.fd = 1,
	.flags = F_PERM | F_NORD,
	.lbf = '\n',
	.write = __stdout_write,
	.seek = __stdio_seek,
	.close = __stdio_close,
#ifndef __LITEOS__
	.lock = -1,
#else
	/* lock always check */
	.lock = 0,
	__INIT_LOCK_ATTR(._lock),
#endif
};
FILE *const stdout = &__stdout_FILE;
FILE *volatile __stdout_used = &__stdout_FILE;
