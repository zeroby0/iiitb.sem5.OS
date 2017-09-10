#include <stdio.h>

int main(int argc, char const *argv[])
{
	extern char** environ;

	printf("%s\n", environ[10]);
	return 0;
}