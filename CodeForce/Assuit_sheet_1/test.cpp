#include <iostream>
using namespace std;
#include <stack>
int main()
{
    stack<int> ww;
    ww.push(4);
    ww.push(3);
    ww.push(2);
    cout << ww.top();
    ww.pop();
    cout << ww.top();
}