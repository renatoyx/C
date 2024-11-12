#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n";

int main() { _
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    // Calcula o maior entre a e b
    int aux = (a + b + abs(a - b)) / 2;

    // Agora calcula o maior entre aux e c
    aux = (aux + c + abs(aux - c)) / 2;

    cout << aux << " eh o maior" << endl;

    return 0;
}