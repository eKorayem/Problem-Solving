// Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L
/*
- pop_back : remove the last character in the string.
- front : print the first character in the string.
- back : print the last character in the string.
- print pos : where (1≤pos≤|S|) print the character in the index pos
- push_back x : add character x in the end of the string. 
- substr l r : where (1≤l,r≤|S|) print sub-string of s from l to r
- sort l r : where (1≤l,r≤|S|) sort all characters of S from l to r
- reverse l r : where (1≤l,r≤|S|) reverse all characters of S from l to r


*/

#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
int main()
{
    int n, q; cin >> n >> q;
    
    string str;
    cin >> str;

    while(q--){
        string query; cin >> query;
        if(query == "pop_back") str.pop_back();
        else if(query == "front") cout << str.front() << endl;
        else if(query == "back") cout << str.back() << endl;

        else if(query == "print"){
            int p; cin >> p;
            cout << str[p-1] << endl;
        }
        else if(query == "push_back"){
            char c; cin >> c; str.push_back(c);
        }
        else if(query == "substr"){
            int l, r; cin >> l >> r;
            if(l>r) swap(l,r);
            string sub = str.substr(l-1, (r-l)+1);
            cout << sub << endl;
        }
        else if(query == "sort"){
            int l, r; cin >> l >> r; 
            if(l>r) swap(l, r);
            sort(str.begin()-1 + l, str.begin()+r);
            
        }
        else if(query == "reverse"){
            int l, r; cin >> l >> r;
            if(l>r) swap(l, r);
            reverse(str.begin()+l-1, str.begin()+r);
        }

    }
}