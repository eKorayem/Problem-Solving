#include <iostream>
using namespace std;



void fillPrefixSum(int arr[], int n, int prefixSum[]){
    prefixSum[0] = arr[0];
    for(int i=1; i!=n; ++i){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
}

void product(int arr[], int n, int answer[]){
    /*

}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int pre[4];
    fillPrefixSum(arr, 4, pre);
    for(auto num:pre) cout << num << " ";
}