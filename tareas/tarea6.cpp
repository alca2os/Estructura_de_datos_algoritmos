#include <stdio.h>

int numero;
int i;

int main(){

printf("Ingrese un numero para saber si es primo:\n");
scanf("%d", &numero);
 

for(i = 2 ; 1 < numero ; i++){
 if(numero%i == 0){
    break;
}
}
if(i == numero){
printf("El numero %d es primo\n", numero);

}else{
    printf("El numero %d no es primo:\n", numero);
}

    return 0;
}