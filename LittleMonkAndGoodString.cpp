#include <iostream>
#define endl '\n'
using namespace std;
#include <vector>

int goodString(string word){
    int i = 0;
    int f = 0;
    int result = 0;
    while(f < word.length()){
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' ||word[i] == 'u'){
            if (word[f] == 'a' || word[f] == 'e' || word[f] == 'i' || word[f] == 'o' ||word[f] == 'u'){
                if((f - i + 1) > result){
                    result = f - i + 1;
                }
                f = f + 1; 
            } else {
                i = f;
                
            }
        } else {
            i = i + 1;
            f = f + 1;
        }
    }

    return result;
}

int main(){
    string s;
    cin >> s;
    int result = 0;
    
    cout << goodString(s) << endl;
    return 0;
}