#include <fcntl.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int fd_1 = open(argv[1], O_RDWR);

	int fcn = fcntl(fd_1, F_GETFL);

	printf("mode: %d\n", fcn);
	
	if (fcn == O_RDWR) {
		printf("File opened in O_RDWR mode\n");
	}

	return 0;
}