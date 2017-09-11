#include <fcntl.h>

#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	
	int fd_1 = open(argv[1], O_RDONLY);

	struct flock lock;
	lock.l_start = 0;
	lock.l_len = 0; // Till the end of the file
	lock.l_pid = getpid();
	lock.l_type = O_RDONLY;
	lock.l_type = 
	result = fcntl(fd_1, F_SETLK);
	printf("Flock returned %d\n", result);
	return 0;
}