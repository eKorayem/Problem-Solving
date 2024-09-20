// Link: https://codeforces.com/problemset/problem/520/A

#include <iostream>
using namespace std;
#include <set>
#include <string>
int main()
{
    set<char> st;

    int n; cin >> n;
    for(int i=0; i!=n; ++i){
        char c; cin >> c; 
        st.insert(tolower(c));
    }
    string out = (st.size() == 26)? "YES" : "NO";
    cout << out;

    
    
}