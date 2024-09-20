#include <iostream>
using namespace std;
#include <algorithm>


#include <deque>

/*

0 -> back - Print number from back and then erase it

1 -> front - Print number from front and then erase it

2 -> reverse - Reverses all elements in queue

3 -> push_back N - Add element N to back

4 -> toFront N - Put element N to front

*/


deque<int> jobs; 
int n;
string query;

bool isReversed; // false by default

int main()
{

        
    cin >> n;
    while(n--){
        cin >> query;

        if(query == "back"){
            if(jobs.size()==0) 
                cout << "No job for Ada?\n";
            else{
                if(isReversed){
                    cout << jobs.front() << endl;
                    jobs.pop_front();
                }else{
                    cout << jobs.back() << endl;
                    jobs.pop_back();
                }
            }
        }

        else if(query=="front"){
            if(jobs.empty()) 
                cout << "No job for Ada?\n";
            else{
                if(isReversed){
                    cout << jobs.back() << endl;
                    jobs.pop_back();
                }else{
                    cout << jobs.front() << endl;
                    jobs.pop_front();
                }
            }
        }
        else if(query=="reverse"){
            isReversed = !isReversed;
        }
        else if(query=="push_back"){
            int number; cin>>number;
            if(isReversed) 
                jobs.push_front(number);
            else
                jobs.push_back(number);
            
        }
        else if(query=="toFront"){
            int number; cin>>number;
            if(isReversed) jobs.push_back(number);
            else jobs.push_front(number);
        }

    }


    return 0;

}