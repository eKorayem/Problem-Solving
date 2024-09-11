#include <iostream>
using namespace std;

int main()
{
    string s = "scott>=tiger";
    string delimiter = ">=";
    string token = s.substr(0, s.find(delimiter));
    cout << token;
}