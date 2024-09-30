#include <stdio.h>
int main (){
    int age;
    printf("entrée votre âge ");
    scanf("%d",&age);
    int mois = age * 12;
    int jours = mois * 30;
    printf(" vous avez : %d mois et %d jours ", mois,jours);
    return 0;
}
