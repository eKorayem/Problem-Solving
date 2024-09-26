#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int r, c;
    int x;
    for(int i=0;i!=5; ++i){
        for(int j=0; j!=5; j++){
            cin >> x;
            if(x==1){
                r=i; c=j; break;
            }
        }
    }

    int count = abs(2-r) + abs(2-c);
    cout << count;
}