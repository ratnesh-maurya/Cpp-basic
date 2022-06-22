#include <stdio.h>
int main()
{
    int a = 14, b = 18;
    if (a++ == 14 && ++b == 19)
        printf("%d\n%d", ++a, ++b);
    else
        printf("%d\n%d", ++a, ++b);
    return 0;
}