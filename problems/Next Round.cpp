
#include <iostream>
using namespace std;

int main() {
int n,k;
cin>>n>>k;
int arr[n];
int answer=0;
for(int i=0;i<n;i++){ //vai adicionar do 0 ao n
	cin>>arr[i];
}
int referencia=arr[k-1]; 	//variavel para checar quais são maiores que o minimo (k)
for(int i=0;i<n;i++){ 	//checar todos os n
	if(arr[i]>=referencia&&arr[i])	//se o n°, for > ou igual ao minimo(ref) e se é diferente de zero
	++answer;
}
cout<<answer;
	return 0;
}