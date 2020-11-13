#include <iostream>

using namespace std;

int main(){
    int n ;
    cin >> n;
    if (n<1){
        cout << "Wrong input";
    }
    else{
        for(int i=0; i<n; i++){
            for(int j=0; j<n;j++){
                cout << "*";
            }
            if(i!=n-1) cout << endl;
        }
    }
    return 0;
}

