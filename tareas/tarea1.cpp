#include <stdio.h>

int numero1;
int numero2; 

int main(){

printf("Ingrese el primer número:\n");
scanf("%d", &numero1);
printf("Ingrese el segundo número:\n");
scanf("%d", &numero2);

if(numero1 == numero2){
    printf("Ambos números son iguales\n");
}else if(numero1 > numero2){
    printf("El numero %d es el mayor\n", numero1);
}else{
    printf("El numero %d es el mayor\n", numero2);
}
    return 0;
}