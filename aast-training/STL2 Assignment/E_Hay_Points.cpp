#include <iostream>
using namespace std;
#include <map>
int main()
{
    int m,n; cin >> m >> n;
    map<string, int> sallary;

    int s;
    string word;
    for(int i=0; i!=m; ++i){
        cin >> word;
        cin >> s;
        sallary[word] = s;
    }

    for(int i=0; i!=n; i++){
        int sum = 0;
        string w;
        while(cin>>w, w!="."){
            int sal = sallary[w];
            sum+= sal;
        }
        cout << sum << endl;
    }
}