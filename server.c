#include "minitalk.h"

int	main(void)
{
	int	id;

	id = getpid();
	printf("%d\n", id);
	pause();
	return (0);
}
