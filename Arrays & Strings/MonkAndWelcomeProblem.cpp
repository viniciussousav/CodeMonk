#include <iostream>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[2][n];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            a[i][j] = (i == 1)? (a[0][j] + a[i][j]): a[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << a[1][i] << " ";
    }
    
    
}
