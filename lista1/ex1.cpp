#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, operacao;
	float result;
	
	cout << "Informe qual ser� a opera��o:\n ";
	cout << "1- para adi��o\n";
	cout << "2- para subtra��o\n";
	cout << "3- para multiplica��o\n";
	cout << "4- para divis�o\n";
	cout << "R: ";
	cin >> operacao;
	
	system ("cls");
	
	cout << "Informe um n�mero inteiro: ";
	cin >> n1;
	
	cout << "Informe outro n�mero inteiro: ";
	cin >> n2;
	
	
	if (operacao==1){
		result = (n1+n2);
	}else if (operacao==2){
		result = (n1-n2);
	}else if (operacao==3){
 	    result = (n1*n2);
    }else if (operacao==4){
    	result = (n1/n2);
	}else if (operacao>=5){
		cout << "N�o � uma escolha v�lida!";
	}
		
	
	
	cout << "O resultado da opera��o �: " <<result;
	
}
