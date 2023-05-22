// Classification of data type:
/*
1. Number (int, long, long long, float, double)
2. String (char)
3. Boolean (true, false)
*/
#include <stdio.h>
int main ()
{
    int integerNumber = 123;
    long longNumber = 54343;
    long long longLongNumber = 45345353434;
    char s = 'K';
    char s1[] = "Kajal Mia";
    printf("%d, %d, %c, %s", integerNumber, longNumber, s, s1);
    return 0;
}