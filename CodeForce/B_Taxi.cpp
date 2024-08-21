#include <iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i!=n; ++i) cin >> arr[i];

    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    int count_4 = 0;

    int num_of_taxis = 0;

    for(int i=0; i!=n; ++i){
        if(arr[i] == 1) count_1++;
        else if(arr[i] == 2) count_2++;
        else if(arr[i] == 3) count_3++;
        else if(arr[i] == 4) count_4++;
    }
    num_of_taxis = count_4;
    num_of_taxis += count_3;

    count_1-=count_3;
    if(count_1<0) count_1 = 0;

    num_of_taxis += ((count_2*2 + count_1)%4==0)? (count_2*2 + count_1)/4 : (count_2*2 + count_1)/4 + 1;
    cout << num_of_taxis; 

    
}