// Link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2296

/*


If there is a tie between an odd number and an even number then the odd number will precede 
If there is a tie between two odd numbers then the larger odd number will precede
if there is a tie between two even numbers then the smaller

odd vs even -> odd
odd vs odd -> larg odd
even vs even -> small



*/

#include <iostream>
#include <algorithm>

using namespace std;


typedef struct num{
    int number;
    int modulo;
    int od_ev;
}Num;

bool cmp(Num n1, Num n2){
    if(n1.modulo == n2.modulo){
        if(n1.od_ev == 1 && n2.od_ev == 1) return n1.number>n2.number;
        if(n1.od_ev == 1 && n2.od_ev == 0) return n1.number>n2.number;
        else return n1.number < n2.number; // both are even
    }
    else return n1.modulo < n2.modulo;
}

int main()
{
    int n; cin>>n;
    int m; cin >> m;
    Num numbers[n];
    for(int i=0; i!=n; ++i){
        int num; cin >> num;
        numbers[i].number = num;
        numbers[i].od_ev = (num%2==0)? 0:1;
        numbers[i].modulo = num%m;
    }
    int buf1, buf2; cin >> buf1 >> buf2;

    sort(numbers, numbers+n, cmp);

    cout << n << " " << m << endl;
    for(Num n:numbers) cout << n.number << endl;
    cout << buf1 << " " << buf2;

    
}