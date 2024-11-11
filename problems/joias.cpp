
#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 
#define endl "\n"; 

int main() { _  
    string joia;
    set<string> njoias; 
    
    while (cin >> joia)//enquanto eu colocar algo em joia ele vai estar tocando algo. para parar basta usar o comando crtl D. 
    {
        njoias.insert(joia);
    }
    cout << njoias.size()<< endl; 
}