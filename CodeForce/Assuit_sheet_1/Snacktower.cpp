#include <iostream>
using namespace std;
#include <stack>
#include <vector>
#include <bits/stdc++.h> 
int main()
{
    int n;
    cin >> n;
    int cn = n;
    vector<int> wait;
    for(int i=0; i!=n; ++i){
        int number; cin >> number;
        auto it = wait.begin();
        if(number == cn){
            cout << number;
            cn--;
            while(it!=wait.end()){
                if(*it != cn){
                    it++;continue;
                }
                cout << " " << *it;
                cn --;
                wait.erase(it);
            }
            cout << endl;
        }
        else{
            cout << endl;
            wait.insert(wait.begin(), number);
            sort(wait.begin(), wait.end(), greater<int>());
        }

    }

    
    for(auto it:wait){
        cout << it << " ";
    }
    

}