#include <iostream>
using namespace std;
#include <set>
#include <sstream>
#include <string>
#include <vector>
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
        
        vector<int> common_values;
        if(A==B) puts("A equals B");
        else{
            set<int> large = (A.size()>=B.size())? A : B;
            set<int> small = (A.size()<B.size())? A : B;
            
            
            for(auto sv:small){
                for(auto sl:large)
                    if(sv==sl) common_values.push_back(sv);
            }
            if(common_values.empty()) puts("A and B are disjoint");
            else{
                if(A.size()<B.size()) puts("A is a proper subset of B");
                else if(A.size()>B.size()) puts("B is a proper subset of A");
                else puts("I'm confused!");
            }

        }

    }

    return 0;
}