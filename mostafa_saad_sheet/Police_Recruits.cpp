// Link: https://codeforces.com/contest/427/problem/A

#include <iostream>
using namespace std;

int main()
{
    int officers = 0, crimes = 0;

    int n; cin>>n;
    for(int i=0; i!= n; ++i){
        int x; cin >> x;
        if(x!=-1){
            officers+=x;
        }else{
            if(officers==0) crimes++;
            else officers--;
        }
    }
    cout << crimes;
}