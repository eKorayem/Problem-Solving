// Link: https://www.spoj.com/problems/ACMCEG2C/en/

#include <iostream>
using namespace std;
#include <deque>
#include <queue>
class monoQueue{
private:
    deque<int> dq;
    queue<int> q;
public:
    void push(int x){
        q.push(x);
        while(!dq.empty() && x>dq.back()) dq.pop_back();
        dq.push_back(x);
    }
    void pop(){
        if(q.front() == dq.front()) dq.pop_front();
        q.pop();
    }
    int front(){
        return q.front();
    }
    int getMax(){
        return dq.front();
    }

};

int main()
{
    int t, n, k;
    scanf("%d", &t);
    
    while(t--){
        int n; int k;

        scanf("%d %d", &n, &k);

        monoQueue mq;

        for(int i=0; i!=n; ++i){
            int x; scanf("%d", &x);
            if(i<k){
                mq.push(x);
            }else{
                printf("%d ", mq.getMax());
                mq.pop();
                mq.push(x);
            }
        }

        printf("%d\n", mq.getMax() );

    }
}
