#include <stdio.h>
#include <unistd.h>

int	main()
{
	int	id;

	id = getpid();
	printf("%d\n", id);
	pause();
	return (0);
}
