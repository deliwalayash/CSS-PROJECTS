#include <iostream>

using namespace std;

int main(){
    int i,j;

    for(i=1; i<=5; i++){
        
            if(i==1 || i==3){
                cout << "*****";
            }
            else{
                cout << "*   *";
            }
        
        cout << "\n";
    }

    return 0;
}