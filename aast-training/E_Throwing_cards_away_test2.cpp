#include <iostream>
using namespace std;

#include <vector>
#include <queue>

int n;

int main()
{
    while(cin >> n, n){
        vector<int> discarded;

        queue<int> q;
        for(int i=1; i<=n; i++) q.push(i);

        while(q.size() > 1){
            discarded.push_back(q.front());
            q.pop();
            q.push(q.front());
            q.pop();
        }

        cout << "Discarded cards:"; // if i put the space here it would be printed if n = 1
        if(discarded.size() == 0) cout << "\n";
        for(int i=0; i!=discarded.size(); ++i){
            if(i+1 == discarded.size()) cout << " " << discarded[i] << endl;
            else cout << " " << discarded[i] << ",";
        }
        // for (int i = 0; i < int(discarded.size()); i++) {
        //     bool isLast = (i + 1 == int(discarded.size()));
        //     printf(" %d%c", discarded[i], ",\n"[isLast]);
        // }

        cout << "Remaining card: " << q.front() << endl;

        
    }


}