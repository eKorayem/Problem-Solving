#include <iostream>
using namespace std;
#include <vector>


int main()
{
    vector<int> ivec;
    ivec.push_back(1);
    ivec.push_back(2);
    ivec.push_back(3);

    auto temp = begin(ivec);
    begin(ivec) = end(ivec);
    end(ivec) = temp;

    for(auto n:ivec) cout << n << " ";
}