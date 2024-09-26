// Link: https://codeforces.com/contest/236/problem/A
#include <iostream>
using namespace std;
#include <set>
int main()
{
    string str; cin >> str;
    set<char> s;
    for(char c:str) s.insert(c);
    cout << ((s.size()%2==0)? "CHAT WITH HER!" : "IGNORE HIM!");
}