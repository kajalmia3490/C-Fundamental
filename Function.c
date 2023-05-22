// Function means that set of some program. 
// For example: 
#include <stdio.h>

int addNumber (int a, int b) {
    int sum = a + b;
    printf("%d is total addition!\n", sum);
}

void msg() {
    char greeting[100] = "Hello, Duniya!";
    printf(greeting);
}

int main ()
{
    printf("Arithmatic function:\n");
    printf("", addNumber(3, 4));
    
    msg();
    
    return 0;
}