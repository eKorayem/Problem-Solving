#include <iostream>
using namespace std;

#include <map>
#include <queue>

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    int sen = 1;
    while(cin>>t, t){
        
        cout << "Scenario #" << sen << endl;
        sen++;
        map<int, int> teamID;
        
        
        string query;
        queue<int> team[t + 100];
        queue<int> team_arrange; // which team arrived first

        int a;  // a is num teamID members
        for(int i=1; i<=t; ++i){
            cin >> a;
            while(a--){
                int element; cin >> element;
                teamID[element] = i;
            }
        }
        while(cin >> query, query != "STOP"){
            if(query[0] == 'E'){
                int val; cin >> val;
                int t_number = teamID[val];
                if(team[t_number].empty()){
                    team_arrange.push(t_number);
                }
                team[t_number].push(val);
            }else{
                cout << team[team_arrange.front()].front() << endl;
                team[team_arrange.front()].pop();
                if(team[team_arrange.front()].empty()){
                    team_arrange.pop();
                }
            }

        }
        
        cout << endl;

    }

    


}