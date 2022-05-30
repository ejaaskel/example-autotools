#include <stdio.h>

int main (int argc, char *argv[]) {
#ifndef STRINGTOPRINT
	printf("Hello Autotools");
#else
	printf(STRINGTOPRINT);
#endif
	return 0;
}
