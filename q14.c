
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i;

    for (i = 40; i <= 75; i++)
    {
        printf("fahrenheit: %.0f ", i);
        printf("Celsius: %f\n", (i - 32) * 5 / 9);
    }

    return 0;
}
