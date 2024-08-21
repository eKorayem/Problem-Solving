#include <iostream>
using namespace std;
// If name is NOT exist --> OK
// IF name is exist, try to suggest a new one, with order name1, name2 and so on


int is_exist(string *users, int start, string user){
    int index =-1;
    for(int i=start; i>=0; --i){
        if(user == users[i]){
            index = i;
            break;
        }
    }
    return index;
}

bool is_digit(string user){
    bool digit = false;
    char c = user[user.size()-1];
    if(c>='0' && c <= '9') digit=true;
    return digit;
}

string rewrite(string &name){
    char c = name[name.size()-1];
    if(isdigit(c)){
        int i = (c-'0');
        ++i;
        name.erase(name.size()-1);
        char n = i+'0';
        name+= n;
    }else{
        name += '1';
    }
    return name;
}

int main()
{

    int num;
    cin >> num;

    string users[num];
    for(int i=0; i!=num; ++i){
        string user;
        cin >> user;
        int index = is_exist(users, i, user);
        if(index<0){
            // Not exist
            users[i] = user;
            cout << "OK" << endl;
        }
        else{
            string new_name = rewrite(user);
            while (is_exist(users,i,new_name)+1)
            {
                rewrite(new_name);
            }
            users[i] = new_name;
            
            cout << new_name << endl;
        }
    }   
}