#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    printf("Avant :\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
       int c = a;
        a = b;
        b = c;
            printf("Après :\n");
            printf("a = %d\n", a);
            printf("b = %d\n", b);
 return 0;
}