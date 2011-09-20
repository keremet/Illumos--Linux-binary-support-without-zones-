#include <unistd.h>
struct __FILE_TAG	/* needs to be binary-compatible with old versions */
{
#ifdef _STDIO_REVERSE
	unsigned char	*_ptr;	/* next character from/to here in buffer */
	int		_cnt;	/* number of available characters in buffer */
#else
	int		_cnt;	/* number of available characters in buffer */
	unsigned char	*_ptr;	/* next character from/to here in buffer */
#endif
	unsigned char	*_base;	/* the buffer */
	unsigned char	_flag;	/* the state of the stream */
	unsigned char	_magic; /* Old home of the file descriptor */
				/* Only fileno(3C) can retrieve the value now */
	unsigned	__orientation:2; /* the orientation of the stream */
	unsigned	__ionolock:1;	/* turn off implicit locking */
	unsigned	__seekable:1;	/* is file seekable? */
	unsigned	__extendedfd:1;	/* enable extended FILE */
	unsigned	__xf_nocheck:1;	/* no extended FILE runtime check */
	unsigned	__filler:10;
};

extern struct  __FILE_TAG	__iob[3];
void* stdin	= (&__iob[0]);
void* stdout	=(&__iob[1]);
void* stderr	=(&__iob[2]);
/*
char* __environ[]={"xterm",0};

void __ctype_b_loc(){
}

char *__secure_getenv(__const char *name){
	return 0;
}
*/

int dlclose(void *handle){
	return 0;
}
long int __strtol_internal(const char * __nptr, char * * __endptr, int __base, int __group){
	return strtol(__nptr, __endptr, __base);
}
int __libc_start_main(int *(main) (int, char * *, char * *), int argc, char * * ubp_av, void (*init) (void), void (*fini) (void), void (*rtld_fini) (void), void (* stack_end)){
	exit(main(argc,ubp_av, stack_end));
}
