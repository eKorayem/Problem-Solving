#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>


int main()
{
    unsigned n;
    cin >>n;
    vector<string> names;
    unsigned repeat[n] = {};

    for(int i=0; i!=n; ++i){
        string in_name;
        cin >> in_name;
        auto it = find(names.begin(),names.end(), in_name );
        int index;
        if(it==names.end()){
            names.push_back(in_name);
            cout << "OK" << endl;
        }else{
            index = distance(names.begin(), it);
            repeat[index]++;
            in_name += to_string(repeat[index]);
            names.push_back(in_name);
            cout << in_name << endl;
        }
    }    
}