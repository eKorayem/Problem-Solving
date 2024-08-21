// Link: https://codeforces.com/contest/677/problem/A

#include <iostream>
using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int miniWidth = 0;
    for(int i=0; i!=n; ++i){
        int ai; cin >> ai;
        miniWidth += (ai<=h)? 1 : 2;
    }
    cout << miniWidth;
}