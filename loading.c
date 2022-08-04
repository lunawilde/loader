#include <stdio.h>
#include <time.h>
#include <unistd.h>

/*
void sleep (long milli)
{
    clock_t end, current = clock();
    for (end = current + milli; current < end; current = clock());
}
*/

const char barPosition[] = {'|', '/', '-', '\\'};

int main()
{
    printf("Loading configuration files... ");
    int x = 0;

    for (;;)
    {
        if (++x > 3) x = 0;

        char currentPosition = barPosition[x];

        printf("\b");
        printf("%c", currentPosition);

        usleep(150000);
        fflush(stdout);
    }

    return 0;
}

