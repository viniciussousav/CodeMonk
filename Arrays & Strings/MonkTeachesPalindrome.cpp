#include <iostream>
#define endl '\n'

using namespace std;



bool Palindrome(string word){
    for(int i = 0, j = word.length() - 1; i < j; i++, j--){
        if(word[i] != word[j])
            return false;
    }
    return true;
}


int main(){
    unsigned int n;
    cin >> n;
    string word;

    for (unsigned int i = 0; i < n; i++)
    {
        cin >> word;
        string a = (Palindrome(word))? ((word.length % 2 == 0)? )       ((word.length % 2 == 0) ?"YES EVEN": "YES ODD"): "NO"
        cout << a << endl;
    }
}

