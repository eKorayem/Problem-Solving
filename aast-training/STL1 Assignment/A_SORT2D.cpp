// Link: https://www.spoj.com/problems/SORT2D/en/

#include <iostream>
using namespace std;
#include <algorithm>


bool cmp(pair<int, int> p1, pair<int, int> p2){
    //     (x1, y1) > (x2, y2) if and only if (x1 > x2) or (x1 == x2 and y1 < y2) 

    if(p1.first == p2.first) return p2.second < p1.second;
    else
        return (p1.first < p2.first);
}
int main()
{
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        pair<int, int> points[n];
        for(int i=0; i!=n; ++i)
            scanf("%d %d", &points[i].first, &points[i].second);

        sort(points, points+n, cmp);
        
        for(int i=0; i!=n ;++i)
            printf("%d %d\n", points[i].first, points[i].second);
    }
    
}