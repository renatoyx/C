// https://codeforces.com/problemset/problem/282/A


#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
#define endl "\n"; 
int main() { _ 
    int n; cin >> n; 
    int sum = 0;
    string a;
    while (n--)
    {
        cin >> a; 
        if (a[1] == '+') {
            sum++; 
        } else { 
            sum--;
        }
    }
    cout << sum << endl; 

} 
        

