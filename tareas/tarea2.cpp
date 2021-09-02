#include <stdio.h>

int numero;

int main(){
printf("Ingrese un numero:\n");
scanf("%d", &numero);

if(numero%2 == 0){
    printf("el numero %d es par\n", numero);
}else{
    printf("el numero %d es impar\n", numero);
}

return 0;
}
