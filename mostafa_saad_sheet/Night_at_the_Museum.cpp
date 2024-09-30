// Link: https://codeforces.com/contest/731/problem/A

#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    string str; cin >> str;

    int n_rotations=0;

    char cur = 'a';
    for( char c:str){
        int p1 = abs(c-cur);
        int p2 = 26-p1;
        n_rotations += min(p1,p2);
        cur = c;
    }

    cout << n_rotations;
}