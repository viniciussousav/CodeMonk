#include <iostream>
#define endl '\n'

using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int M[n][n];

        for (int j = 0; j < n*n; j++)
        {
            cin >> M[j/n][j%n];
        }


        for (int j = 0; j < n*n; j++)
        {
            if(j%n == n-1)
                cout << M[j/n][j%n] << endl;
            else 
                cout << M[j/n][j%n] << " ";
        }
        
    }
    

}