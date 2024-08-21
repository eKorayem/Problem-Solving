#include <iostream>
using namespace std;
#include <map>
bool isAnagram(string w1, string w2){
    map<char, int> charPair;
    for(char c : w1){
        charPair
    }
    return true;
}

int  main()
{
    map<string, string> myDictionary;
    myDictionary.insert(pair<string, string> ("banana", "die banana"));
    myDictionary.insert(pair<string, string> ("Apple", "der Apfel"));
    myDictionary.insert(pair<string, string> ("orange", "die orange"));

    myDictionary["oraange"] = "ofof";

    for(auto pair:myDictionary){
        cout << pair.first << " = " << pair.second << endl;
    }
}