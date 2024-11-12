// https://br.spoj.com/problems/QUERM/

#include <bits/stdc++.h>
using namespace std; 
#define _ ios_base::sync_with_stdio(0);cin.tie(0); 

int main() { _

    int numreoTeste;
    int contagem = 1;
   

    while (true) {
        cin >> numreoTeste;
        vector<int> entradas(numreoTeste, 0); 
        if (numreoTeste == 0) break;

            for(int i = 0; i < entradas.size(); i++ ){
                cin >> entradas[i]; 
            }

            for (int j = 0; j < entradas.size(); j++) {
                if (entradas[j] == j+1) {
                    // cout << entradas[j];
                    cout << "Teste " << contagem << endl;
                    cout << entradas[j] << endl;
                    contagem++;
                } 
            }


    } 

}



// 4
// 4 5 3 1
// 10
// 9 8 7 6 1 4 3 2 12 10
// 0