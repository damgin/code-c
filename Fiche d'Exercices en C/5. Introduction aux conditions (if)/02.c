#include <stdio.h>
int main(){
    int age = 0;
    printf("entrée votre age\n");
    scanf("%d",&age);
    if (age > 18){
    printf("papy\n");
    } else if (age == 18) {
        printf("finit les vacances\n");
    }else{
    printf("bebe\n");}
return 0;
} 