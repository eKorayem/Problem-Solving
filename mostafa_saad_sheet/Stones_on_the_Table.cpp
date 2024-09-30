// Link: https://codeforces.com/contest/266/problem/A

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    string str; cin >> str;
    int out = 0;
    for(int curr=0, next=1; next!=n; ++curr, ++next){
        str[curr] == str[next]? out++:out;
    }
    cout << out;
}