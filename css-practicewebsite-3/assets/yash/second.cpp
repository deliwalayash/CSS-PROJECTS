#include <iostream>

using namespace std;

int main(){
    int i,j,s=11;

    for(i=1; i<=4; i++){
        for(j=1; j<=i; j++){
            cout << s;
            s=++s;
        }

        cout << "\n";
    }

    return 0;
}