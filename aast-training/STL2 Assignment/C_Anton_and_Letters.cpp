#include <iostream>
using namespace std;
#include <set>
#include <string>
int main()
{
    set<char> st;
    string str;
    getline(cin, str);
    for(char c: str){
        if(c=='{' || c=='}' || c == ',' || c == ' ') continue;
        st.insert(c);
    }
    cout << st.size();
}