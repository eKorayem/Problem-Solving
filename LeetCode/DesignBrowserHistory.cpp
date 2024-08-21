#include<iostream>
using namespace std;
#include<stack>
class BrowserHistory {
private:
    stack<string> history;
    stack<string> front;
public:
    BrowserHistory(string homepage) {
        history.push(homepage);
    }
    
    void visit(string url) {
        front = stack<string>();
        history.push(url);
    }
    
    string back(int steps) {
        
        if(steps>history.size()) steps = history.size();
        for(int i=0; i!=steps; i++){
            if(history.size() == 1) break;
            front.push(history.top());
            history.pop();
        }
        return history.top();
    }
    
    string forward(int steps) {
        // if(front.size() == 0) return "null";
        if(steps>front.size()) steps = front.size();
        for(int i=0; i!=steps; i++){
            history.push(front.top());
            front.pop();
        }
        return history.top();
    }
};

int main()
{
    BrowserHistory browserHistory = BrowserHistory("leetcode.com");
    browserHistory.visit("google.com");
    browserHistory.visit("facebook.com");
    browserHistory.visit("youtube.com");
    cout << browserHistory.back(1) << endl;
    cout << browserHistory.back(1) << endl; 
    cout << browserHistory.forward(1) << endl; 
    browserHistory.visit("linkedin.com");
    cout << browserHistory.forward(2) << endl;
    cout << browserHistory.back(2) << endl;
    cout << browserHistory.back(7) << endl;
    
}