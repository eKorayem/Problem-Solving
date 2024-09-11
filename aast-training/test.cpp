// Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=481

/*

    ================ APROACH =============
    team_ids => a int<->int map tells you the element team
    teams_order => queue to know the order of teams
    team_queue => array of queues, each queue has one team



*/

#include <iostream>
using namespace std;
#include <map>
#include <queue>

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    int scenario_n = 1;
    while(cin>>t, t){
        cout << "Scenario #" << scenario_n << endl; scenario_n++;
        map<int, int> team_ids;
        queue<int> teams_order;
        queue<int> team_queue[t+100];

        // classify the elements
        for(int i=0; i!=t; ++i){
            int n; cin >> n; // n is number of elements in the team
            while(n--){
                int val; cin >> val;
                team_ids[val] = i;
            }
        }

        // Working with queries
        string query;
        while(cin >> query, query != "STOP"){
            // Enqueue
            if(query[0] == 'E'){
                int val; cin >> val;
                // check if the team of this value is empty
                int val_team_id = team_ids[val];
                if(team_queue[val_team_id].empty()){
                    teams_order.push(val_team_id);
                }
                team_queue[val_team_id].push(val);
            }else{ 
            // Dequeue
                // get the first team to pop from
                int ft_id = teams_order.front();
                cout << team_queue[ft_id].front() << endl;
                team_queue[ft_id].pop();
                if(team_queue[ft_id].empty()) teams_order.pop(); // check if the team queue is empty
            }
        }
        cout << endl;
    }
}