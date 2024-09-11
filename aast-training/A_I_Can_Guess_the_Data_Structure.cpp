#include <iostream>
using namespace std;
#include <stack>
#include <queue>

int main()
{
    int n;
    while(cin>>n){
        queue<int> q; int c_q = 1;
        stack<int> s; int c_s = 1;
        priority_queue<int> pq; int c_pq = 1;

        
        int operations = 0;
        for(int i=0; i!=n; ++i){
            int c; cin >> c;
            switch (c)
            {
            case 1:
                int num; cin >> num;
                q.push(num);
                pq.push(num);
                s.push(num);
                break;
            
            case 2:
                operations++;
                int out; cin >> out;
                if (!q.empty() && q.front() == out) q.pop();
                else c_q = 0;

                if (!s.empty() && s.top() == out) s.pop();
                else c_s = 0;

                if (!pq.empty() && pq.top() == out) pq.pop();
                else c_pq = 0;
            }
        }

        if( c_q + c_s + c_pq > 1) cout << "not sure\n";
        else if(c_q + c_s + c_pq == 0) cout << "impossible\n";
        else if(c_s) cout << "stack\n";
        else if(c_q) cout << "queue\n";
        else if(c_pq) cout << "priority queue\n";
            

    }
    

}