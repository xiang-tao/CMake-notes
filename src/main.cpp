// #include "add.cpp"
#include "head.h"
// #include "sub.cpp"
#include <stdio.h>

int main()
{
    int a = 20;
    int b = 12;
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", add(a, b));
    printf("a - b = %d\n", subtract(a, b));
    return 0;
}
