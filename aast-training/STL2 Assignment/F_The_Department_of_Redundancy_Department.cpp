#include <iostream>
using namespace std;
#include <set>
#include <vector>


int main()
{   
    multiset<int> ms;
    vector<int> v;
    int ival;
    while(cin>>ival){
        v.push_back(ival);
        ms.insert(ival);
    }

    for(auto i:v){
        int counter = ms.count(i);
        if(counter){
            cout << i << " " << counter << endl;
            ms.erase(i);
        }
    }

}