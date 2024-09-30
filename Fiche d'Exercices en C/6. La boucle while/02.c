#include <stdio.h>
int main(){
    int nombre = 0;
    int i = 0;
    printf("entrer un nombre\n");
    scanf("%d",&nombre);
        while( i<= 10){
        printf("%d * %d = %d\n", nombre, i, nombre * i);
        i++;
         }
    return 0;
}