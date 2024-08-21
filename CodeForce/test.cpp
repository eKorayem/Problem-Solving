#include <iostream>
using namespace std;
#include <string>

string rewrite(string &name){
    char c = name[name.size()-1];
    if(isdigit(c)){
        int i = c-'0';
        ++i;
        cout << "I: " << i << endl;
        name.erase(name.size()-1);
        name+= char(i);
    }else{
        name += '1';
    }
    return name;
}


int main()
{
    string str="eslam";

    int i=9;
    char c = i+'0';
    cout << c;
    str +=c;
    cout << str;
    
}