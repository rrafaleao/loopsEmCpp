#include <iostream> 
using namespace std; 

int main(){
    int num, i;
    i = 1;
    cout << "Digite um número: " << endl;
    cin >> num; 

        while(i < num){
            if(num % 2 == 0){
            cout << i << endl;
            i += 1;
            }else{
                cout << i << endl;
                i += 2;
            }
        }
    return false;
}
