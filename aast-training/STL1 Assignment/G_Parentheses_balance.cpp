// Link: https://vjudge.net/contest/426577#problem/G
#include <iostream>
using namespace std;
#include <stack>
#include <string>
#include <vector>

int main()
{
    

    int n; cin >> n; cin >> ws;



    for(int i=0; i!=n; ++i){
        string pare;
        getline(cin, pare);

        stack<char> s;
        
        bool valid = true;

        for(char c:pare){
            if(c == '(' || c == '[') s.push(c);
            else if( !s.empty() && ( (s.top() == '(' && c == ')') || (s.top()=='[' && c==']') )){ // c == ')' || ']'
                s.pop();
            }else{
                valid = false; break;
            }
        }
        if(valid && s.empty()) cout << "Yes\n";
        else cout << "No\n";

    }





}