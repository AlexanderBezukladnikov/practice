#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if(x>y){
        cout << x;
    }
    else if(y>z){
        cout << y;
    }
    else{
        cout << z;
    }
    return 0;
}

