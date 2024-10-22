#include <iostream>

using namespace std;

int main(){
    int i,j,bi=1;

    for(i=5; i>=1; i--){
        for(j=i; j>=1; j--){
            if(bi==1){
                cout << bi;
                bi=0;
            }
            else{
                cout << bi;
                bi=1;
            }
            
        }
        cout << "\n";
    }

    return 0;
}