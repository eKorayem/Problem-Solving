// Link: https://codeforces.com/contest/431/problem/A

#include <iostream>
using namespace std;
#include <map>
int main()
{
    map<int, int> mp;
    int cal;
    for(int i=1; i!=5; ++i){
        cin >> cal;
        mp[i] = cal;
    }

    string str; cin >> str;
    int sum = 0;
    for(char c:str) sum += mp[c-'0'];
    cout << sum;
}