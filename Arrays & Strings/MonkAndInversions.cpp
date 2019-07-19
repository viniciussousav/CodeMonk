#include <iostream>
#define endl '\n'

using namespace std;

int main(){
    
    int t;
    cin >> t;
    for (int k = 0; k < t; k++){
        int n;
        cin >> n;
        int M[n][n];
        int result = 0;
        for (int i = 0; i < n*n; i++){
            cin >> M[i/n][i%n];
        }

        for (int l = 0; l < n*n; l++){
            int i = l/n;
            int j = l%n;

            for (int p = i; p < n; p++){
                for (int q = j; q < n; q++){
                    if(M[i][j] > M[p][q]){
                        result += 1;
                    }
                }
            }
        }
      
        cout << result << endl;
    }
}