#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout <<"Digite um número: ";
    cin >> num1;
    cout <<"Digite um número: ";
    cin >> num2;


    for(int i = num1; i <= num2; i++){
        if(i % 2 != 0){
            cout<< i << " é impar" <<endl;
        }
    }

    return false;
}