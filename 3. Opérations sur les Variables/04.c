#include <stdio.h>
int main(){
    float C;
        printf("entrée la donnée temperature en °C");
        scanf("%f",&C);
            float F = (C * 9/5) + 32;
            printf("il fait %.1f degres fahrenheit",F);
return 0;
}