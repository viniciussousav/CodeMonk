#include <iostream>
#define endl '\n'

using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int array[n];
        for (int j = 0; j < n; j++)
        {
            cin >> array[(j+k)%n];
        }
        for (int j = 0; j < n; j++)
        {
            cout << array[j] << " ";
        }
    }
    
    return 0;
}
