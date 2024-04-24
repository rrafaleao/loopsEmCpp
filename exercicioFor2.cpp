#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Digite um número: " <<endl;
    cin >> num;

    for(int i = 1; i <= num; i++){
        if(i % num != 0){
            cout << "Seu numero é primo";
        }
    }
    return false;
}