#include <iostream> 
using namespace std; 

int main() { 
    int n; 
    string s; 
    cin >> n; 
    
    while (n--) { //até for zero, e diminui um a cada passagem. 
        cin >> s; 
        if (s.length() > 10)
        {
            cout << s[0] << s.length() -2 << s[s.length() -1] << endl; //out primeiro caractere da string S << numero de caracteres - 2 da string S << ultimo caractere da string S << quebra de linha 
        } else {
            cout << s << endl; 
        }
    }

        return 0;
    
}