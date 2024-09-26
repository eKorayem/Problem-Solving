// link: https://codeforces.com/contest/112/problem/A
#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    bool flag = true;
    for(int i=0; i!=str1.size(); ++i){
        if(tolower(str1[i]) > tolower(str2[i])){
            cout << 1; flag = false;
            break;
        }
        else if(tolower(str1[i]) < tolower(str2[i])){
            cout << -1; flag = false;
            break;
        }
    }
    if(flag) cout << 0;
    
}