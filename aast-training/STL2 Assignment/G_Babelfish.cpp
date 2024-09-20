#include <iostream>
using namespace std;
#include <map>
#include <vector>
#include <string>
#include <sstream>
int main()
{
    string s, str, k;
    
    map<string, string> dic;
    while(getline(cin, str), str!=""){
        stringstream ss;
        ss.clear();
        ss << str;
        ss >>s>>k;
        dic[k] = s;
    }

    string q;
    while(cin >> q){
        string out = (dic.count(q) == 0)? "eh" : dic[q];
        cout << out << endl;
    }
}