/*
Array means that a data structure. Here, It can be stored one kind of data. Like as: Number/String/Boolean/Character.
*/
#include <stdio.h>
int main ()
{
    int name[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d, %d\n", name[0], name[2]);
    
    // All data print:
    for(int i = 0; i < 9; i++) {
        printf("%d\n", name[i]);
    }
    
    printf("Completed!");
    return 0;
}