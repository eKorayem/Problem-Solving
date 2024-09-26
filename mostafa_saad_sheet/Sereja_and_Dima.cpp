//Link: https://codeforces.com/contest/381/problem/A

#include <iostream>
using namespace std;

int main()
{
    int n; cin>> n;
    int arr[n];
    int start = 0, end = n-1, sereja = 0, dima=0;
    bool flag=0;
    
    for(int i=0; i!=n; i++){
        cin >> arr[i];
    }

    while(start<=end){
        int card;
        if(arr[start]>arr[end]){
            card = arr[start];
            start++;
        }else{
            card = arr[end];
            end--;
        }
        if(flag == 0) {
            sereja += card;
            flag = !flag;
        }else{
            dima += card;
            flag = !flag;
        }
    }
    cout << sereja << " " << dima;

}