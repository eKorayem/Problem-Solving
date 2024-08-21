#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
int main()
{
    /*
    
        - get the product of the array
        - if array contains 0:
            all indexes will = 0 except the index contans 0
        - if it contains more than one zero:
            all array will be zero

    */
    vector <int> nums = {-1,1,0,-3,3};
    int zero = count(nums.begin(), nums.end(), 0);
    vector <int> answer(nums.size(), 0);
    if(zero>=2){
        cout << "f" << endl;
    }
    else{
        int product = 1;
        for(int i=0; i!=nums.size(); ++i){
            if(nums[i] == 0) continue;
            product *= nums[i];
        }

        if(zero==1){
            for(int i=0; i!=nums.size(); ++i){
                if(nums[i] == 0) answer[i] = product;
                else answer[i] = 0;
            }
        }
        if(zero==0){
            for(int i=0; i!=answer.size(); ++i){
                answer[i] = product/nums[i];
            }
        }
    }



    
    for(auto num:answer) cout << num << " ";
   
    // cout << product;
    // for(auto num:nums){

    //     answer.push_back(product/num);
    // }


}