#include <iostream>
using namespace std;

int main(){
int n, soma = 0;
  printf("Digite um número: ");
  scanf("%d", &n);
  while (n > 0) {
    soma += n % 10;
    n /= 10;
  }
  printf("Soma dos dígitos: %d\n", soma);
  return false;
  }
  

