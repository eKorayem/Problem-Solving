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
    monoQueue mq;

    mq.push(8);
    mq.push(5);
    mq.push(5);
    mq.push(6);
    mq.push(7);

    mq.pop();
    int max = mq.getMax();
    cout << max;

}