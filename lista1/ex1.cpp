#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, operacao;
	float result;
	
	cout << "Informe qual será a operação:\n ";
	cout << "1- para adição\n";
	cout << "2- para subtração\n";
	cout << "3- para multiplicação\n";
	cout << "4- para divisão\n";
	cout << "R: ";
	cin >> operacao;
	
	system ("cls");
	
	cout << "Informe um número inteiro: ";
	cin >> n1;
	
	cout << "Informe outro número inteiro: ";
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
		cout << "Não é uma escolha válida!";
	}
		
	
	
	cout << "O resultado da operação é: " <<result;
	
}
