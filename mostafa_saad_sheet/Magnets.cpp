//Link: https://codeforces.com/contest/344/problem/A
#include <iostream>
using namespace std;

int main()
{
    int groups = 0;
    int n; cin >> n;
    int prev=0;
    for(int i=0;i!=n; ++i){
        int curr; cin >> curr;
        if(curr != prev) groups++;
        prev = curr;
    }
    cout << groups;
}