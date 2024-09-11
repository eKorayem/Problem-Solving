#include <iostream>
using namespace std;
#include <set>
#include <sstream>
#include <string>

string str;

int main()
{
    while(getline(cin, str)){
        set<int> A, B;
        stringstream ss;

        int n;

        ss<<str;
        while(ss){
            ss>>n;
            A.insert(n);
        }

        getline(cin, str);
        ss = stringstream(str);
        while(ss){
            ss>>n;
            B.insert(n);
        }

        
        

    }

    
}