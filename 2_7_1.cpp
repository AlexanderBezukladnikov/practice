#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n ;
    cin >> n;
    int s = sqrt(n);
    if (n!=s*s){
        cout << "Wrong input";
    }
    else{
        for(int i=0; i<s; i++){
            for(int j=0; j<s;j++){
                cout << "*";
            }
            if(i!=s-1) cout << endl;
        }
    }
    return 0;
}
