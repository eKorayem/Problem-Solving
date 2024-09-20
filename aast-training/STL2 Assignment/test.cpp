#include <iostream>
using namespace std;
#include <set>
#include <map>
#include <sstream>
int main()
{
    string word = "hello";

    string word2 = "world";
    string empty;

    stringstream ss;
    ss<<word;

    ss >> word2 >> empty;

    cout << empty;
    

}