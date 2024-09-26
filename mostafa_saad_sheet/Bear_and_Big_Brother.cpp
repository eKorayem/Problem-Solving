// Link: https://codeforces.com/contest/791/problem/A

#include <iostream>
using namespace std;

int main()
{
    int l_w, b_w;
    cin >> l_w >> b_w;
    int years = 0;
    while(l_w<=b_w){
        l_w *= 3;
        b_w *= 2;
        years++;
    }
    cout << years;

}