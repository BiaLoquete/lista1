#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, result;
	
	cout << "Informe a primeira nota: ";
	cin >> n1;
	
	cout << "Informe a segunda nota: ";
	cin>> n2;
	
	cout << "Informe a terceira nota: ";
	cin >> n3;
	
	result = (n1+n2+n3) / 3;
	
	if (result >= 7){
		cout << "Voc� foi aprovado!";
	}else if (result ==5 or result ==6){
		cout << "Voc� est� de recupera��o!";
	}else if (result <=4){
		cout << "Voc� reprovou!";
	}
	


}
	
