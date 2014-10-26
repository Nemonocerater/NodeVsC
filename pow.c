#include<math.h>
#include<stdio.h>
#include<sys/time.h>
#include<time.h>
#include<unistd.h>

unsigned long getTime()
{
	struct timeval tv;
	gettimeofday(&tv,NULL);
	return 1000000 * tv.tv_sec + tv.tv_usec;
}

void longComputation(int iterations)
{
	while ((iterations--) > 0)
	{
		double a = pow(3,64);
	}
}

int main(int count, char** values)
{
	int iterations = 10000000;
	//clock_t before = clock();
	unsigned long before = getTime();
	longComputation(iterations);
	unsigned long after = getTime();
	printf ("%lu\n", (before));
	printf ("%lu\n", (after));
	//clock_t after = clock();
	//double duration = (double)(after - before)/CLOCKS_PER_SEC;
	//printf("(c) Duration: %fms\n", (duration * 1000));
	return 0;
}

