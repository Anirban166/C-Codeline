#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

#define RNG_M 2147483647L /* m = 2^31 - 1 */
#define RNG_A 16807L
#define RNG_Q 127773L     /* m div a */
#define RNG_R 2836L	 /* m mod a */

/* 32 bit seed */
static long rnd_seed;

void set_rnd_seed (long seedval)
{
    /* set seed to value between 1 and m-1 */
    rnd_seed = (seedval % (RNG_M - 1)) + 1;
}

/* returns a pseudo-random number from set 1, 2, ..., RNG_M - 1 */
long rnd()
{
    register long low, high, test;
    set_rnd_seed( (unsigned int) time(0) + getpid());
    high = rnd_seed / RNG_Q;
    low = rnd_seed % RNG_Q;
    test = RNG_A * low - RNG_R * high;
    if (test > 0)
        rnd_seed = test;
    else
        rnd_seed = test + RNG_M;
    return rnd_seed;
}


int main(void)
{
    printf("Random number generated is %d\n", rnd());
    return 0;
}
