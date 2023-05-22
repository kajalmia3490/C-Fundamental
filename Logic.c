// Logic means that Conditions and this is called dicision maker.
// For example:
#include <stdio.h>
int main()
{
    int a, b, c;
    a = 20;
    b = 30;
    c = 50;
    if (a > b)
    {
        printf("%d is greater than bc", a);
    }
    else if (b > c)
    {
        printf("%d is greater than ac", b);
    }
    else
    {
        printf("%d is greater than ab", c);
    }

    return 0;
}