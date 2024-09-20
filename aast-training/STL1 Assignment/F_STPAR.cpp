#include <iostream>
using namespace std;
#include <queue>
#include <stack>

int n; 
int num;

int main()
{
    
    
    while (cin >> n, n) { // if n=0 break
        int curr = 1;
        queue<int> q;
        stack<int> rest;
        for(int i=0; i!=n; ++i){
            cin >> num;
            q.push(num);
        }
        
        while(!q.empty()){

            if(curr == q.front()) { // n in turn
                curr++;
                q.pop();
            }
            else{ // n not in turn
                if(rest.empty()){// rest is empty
                    rest.push(q.front());
                    q.pop();
                } 
                else{ // check the rest not empty
                    if(rest.top() == curr){ // if stack top is curr
                        rest.pop();
                        curr++; 
                    }
                    else{ // stack top not the curr & q front not the curr
                        rest.push(q.front());
                        q.pop();
                    }
                }
            }
        }
        while(!rest.empty() && curr==rest.top()){
            curr++;
            rest.pop();
        }
        if(rest.empty()) cout << "yes\n";
        else cout << "no\n";
        
    }

    
    
}