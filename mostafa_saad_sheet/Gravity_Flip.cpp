#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    int n; cin >> n; int arr[n];
    for(int i=0; i!= n; ++i) cin >> arr[i];
    sort(arr, arr+n);
    for(int a:arr) cout << a << " ";
}