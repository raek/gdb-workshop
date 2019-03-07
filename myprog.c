#include <stdlib.h>

int square(int x)
{
    return x * x;
}

int main(void)
{
    int x = 5;
    int y = square(x);
    int z = 0;
    for (int i = 0; i < 10; i++) {
        z++;
    }
    return 0;
}
