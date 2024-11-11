// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
typedef long long ll;  

int main() { _ 

    int n; cin >> n; 
    int sum = 0; 
    while(n--) { 
        vector<int> team(3); 
        cin >> team[0] >> team[1] >> team[2]; 
        sort(team.begin(), team.end()); 
        if(team[1] &&  team[2] == 1) {
            sum++;
        }
    }
    cout << sum << endl; 
 }