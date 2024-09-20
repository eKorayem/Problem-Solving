// link: https://www.spoj.com/problems/DOTAA2/en/

#include <iostream>
using namespace std;
#include <algorithm>
#include <cstring>
const int M = 20;

typedef struct hero{
    char name[M];
    int accuracy;
    int speed;
    int stupidity;
}Hero;

bool cmp(Hero h1, Hero h2){
    if(h1.accuracy == h2.accuracy){
        if(h1.speed == h2.speed)
            if(h1.stupidity == h2.stupidity)
                return strcmp(h1.name, h2.name) < 0;
            else return h1.stupidity < h2.stupidity;
        else return h1.speed > h2.speed;
    }
    else return h1.accuracy > h2.accuracy;
}

int main()
{
    int n; cin >> n;
    Hero heroes[n];
    for(int i=0; i!=n; ++i)
        cin >> heroes[i].name >> heroes[i].accuracy >> heroes[i].speed >> heroes[i].stupidity;
    
    sort(heroes, heroes+n, cmp);
    
    for(Hero h:heroes)
        cout << h.name << endl;


}