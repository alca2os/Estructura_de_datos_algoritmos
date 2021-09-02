#include <stdio.h>

int numero;

int main(){
printf("Ingrese un numero:\n");
scanf("%d", &numero);

printf("Los divisores del %d son:\n 1,", numero);
for(int i = 2; i < numero; i++){
    if(numero%i == 0){
        printf(" %d,", i);
    }
}

printf(" %d", numero);

    return 0;
}