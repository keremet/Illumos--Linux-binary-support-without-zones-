LIB=linux.so.1
all: $(LIB)
$(LIB): linux.o
	gcc -shared -Wl,-soname,$@ -o $@  linux.o
linux.o:linux.c
	gcc -c -fPIC linux.c -o linux.o
	

