#include <iostream>
using namespace std;

int main(){
    int numero;
    cout <<"Digite um número para ver a tabuada: " << endl;
    cin >> numero;

    for(int i = 1; i <= 10; i++){
        cout << numero, i, numero * i;
    }

    return false; 
}