#include <stdio.h>
int main(){
    int nombre[5] = {1,2,3,4,5};
    int i = 0;
    while(i<5){
        printf("nombre %d est %d\n",nombre);
        i++;
    }
    return 0;
}