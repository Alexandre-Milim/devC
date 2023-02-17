#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	
	cout << "Digite um numero: ";
	cin >> n1;
	
	cout << "Digite outro numero: ";
	cin >> n2;
	
	(n1>n2);
	
	if ( n1> n2){
		cout << "FOI UM NUMERO MENOR: " << n2 << " CERTOU NEGAAA";
	}else {
		cout << "FOI UM NUMERO MAIOR: ";
	}
}
