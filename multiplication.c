#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long product(int x, int y)
{
    return (long long)x * y;
}

int main(void)
{
    srand((unsigned int)time(NULL));

    const int N = 10000000;
    long long result = 0;

    for (int i = 0; i < N; i++)
    {
        int x = rand() % 10000000 + 100000;
        int y = rand() % 10000000 + 100000;

        result += product(x, y);
    }

    printf("%lld\n", result);

    return 0;
}