#include <stdio.h>

int main(){
  int anoNasc,idade,anoAtual;
  printf("Digite seu ano de nascimento: ");
  scanf("%i", &anoNasc);

  printf("Digite o ano atual: ");
  scanf( "%i", &anoAtual);
  idade=anoAtual-anoNasc;
  if(idade>=16){
    printf("\n\nVocê pode votar esse ano!");
  }else if(idade<16){
    printf("\n\nVocê não pode votar esse ano!");
  }else{
    "Erro";
  }
  return 0;
}