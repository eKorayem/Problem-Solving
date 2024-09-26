// link: https://codeforces.com/contest/231/problem/A
#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int sol = 0;
    for(int i=0;i!=n; ++i){
        int count = 0;
        for(int j=0; j!=3; j++){
            int t; cin >> t;
            count += t;
        }
        if(count>=2) sol++;
    }
    cout << sol;
}