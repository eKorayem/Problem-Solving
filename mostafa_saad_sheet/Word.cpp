// Link: https://codeforces.com/contest/59/problem/A
#include <iostream>
using namespace std;

int main(){
    string str; cin >> str;
    int lower_count = 0;
    int upper_count = 0;
    for(char c:str){
        if(islower(c)) lower_count++;
        else upper_count++;
    }
    if(upper_count>lower_count)
        for(char &c:str) c = toupper(c);

    
    else
        for(char &c:str) c = tolower(c);
    
    cout << str;
}