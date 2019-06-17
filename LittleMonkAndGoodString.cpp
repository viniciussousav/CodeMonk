#include <iostream>
#define endl '\n'
using namespace std;
#include <vector>

bool isGoodString(string word){
    for(int i = 0; i < word.length(); i++) {
        if((word[i] != 'a'|| word[i] != 'e'|| word[i] != 'i' || word[i] != 'o'|| word[i] != 'u') && word[i] != ' ' )
            return false;
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    int result = 0;
    vector<string> goodStrings;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {
            string test = s.substr(i, j-i+1);
            cout << test << endl;
            if(isGoodString(test)){
                goodStrings.push_back(test);
                result+=1;
            }
        }        
    }
    cout << result << endl;
    return 0;
}