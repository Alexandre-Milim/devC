#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	string letra;
	
	cout << "digite uma letra: ";
	cin >> letra;
	
	if ( letra =="a" or letra=="e" or letra=="i" or letra=="o" or letra=="u"){
		
		cout << "� uma vogal: ";
	}else {
		cout << "� uma consoante: ";
	}
}
