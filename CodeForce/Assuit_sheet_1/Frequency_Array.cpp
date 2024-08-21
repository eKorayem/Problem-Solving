#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    int freq[m+1] = {};
    int arr[n];
    for(int i=0; i!=n; ++i){
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for(int i=1; i<=m; ++i){
        cout << freq[i] << endl;
    }
}