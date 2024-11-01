#include <stdio.h>

int main(){
  int contador=0;
  int num;
  printf("Digite até que numero quer contar: ");
  scanf("%i",&num);
  
  for(contador=0; contador<=num; contador++){
    printf("%i ",contador);
  }
  return 0;
}