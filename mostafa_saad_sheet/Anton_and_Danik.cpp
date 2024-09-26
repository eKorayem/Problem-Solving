#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int anton_count = 0;
    int danik_count = 0;
    for(int i=0; i!=n; ++i){
        if(str[i] == 'A') anton_count++;
        else danik_count++;
    }
    if(anton_count>danik_count) cout << "Anton";
    else if(danik_count>anton_count) cout << "Danik";
    else cout << "Friendship";
}