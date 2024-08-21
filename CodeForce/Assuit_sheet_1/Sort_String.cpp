#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int freq[26] = {};
    for(int i=0; i!=n; ++i){
        char ch; cin >> ch;
        freq[ch - 'a'] ++;
    }
    for(int i=0; i!=26; ++i){
        for(int j=0; j!=freq[i]; ++j){
            cout << char(i+'a');
        }
    }
}