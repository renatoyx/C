#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
#define endl "\n"; 
int main() { _
    double a; cin >> a; 
    double n = 3.14159; 
    double resultado = n * (a*a);
    cout << setprecision(4) << fixed; //define quantas casa decimais precisa 

    cout << "A="<< resultado << endl; 

    return 0;
}