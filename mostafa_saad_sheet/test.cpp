#include <iostream>
using namespace std;

int main()
{
    string str = "hello";
    for(char &c:str) c = toupper(c);
    cout << str;
}