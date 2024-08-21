#include <iostream>
using namespace std;

#include <stack>
// () {} []

bool isValid(string s){
    stack<char> bracks;
    for(auto c:s){
        if(bracks.empty()){
            bracks.push(c);
        }else{
            char topchar = bracks.top();
            if( (topchar == '(' && c==')') || (topchar == '{' && c=='}') || (topchar == '[' && c==']') )
                bracks.pop();
            else{
                bracks.push(c);
            }
        }
    }
    return bracks.empty();
}

int main()
{
    bool is = isValid("(]");
    cout << is;
}