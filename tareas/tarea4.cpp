#include <stdio.h>
int x = 0;
int numero;
int suma;

int main(){

do{
  printf("Ingrese un numero:\n");
  scanf("%d",&numero);
  x = numero;
  suma += x; 

}while(numero != 0);
printf("La suma total es = %d", suma);

  return 0;
}