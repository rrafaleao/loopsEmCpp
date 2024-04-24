#include <iostream>
using namespace std;

int main(){
    int numero, fatorial = 1;
    cout << "digite um número para calcular o fatorial: " << endl;
    cin >> numero;

    for(int i = 1; i <= numero; i++){
        fatorial *= i;
    }
    cout <<"O Fatorial de " << numero << " é: "<< fatorial << endl;
    return false;
}