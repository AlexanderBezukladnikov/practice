#include <iostream>

using namespace std;

int main()
{
    int n;
	cin >> n;

	if (n <= 2)
		cout << "Wrong input";
	else
	{
        for (int i = n; i >=1; i--){
            for(int j = 0; j<n-i; j++){
                cout << " ";
            }
            for (int j = 0; j<i; j++){
                cout << "*";
            }
            if (i!=1) cout << endl;
        }
	}
	return 0;
}
