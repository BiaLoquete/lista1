#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salario, result, aumento;
	string nome;
	
	cout << "Informe seu nome: ";
	cin >> nome;
	
	cout << "Informe seu salário: ";
	cin >> salario;
	
	
	if (salario <=1500){
		aumento = salario*1.10;
		cout << "O salario era " << salario << " e passou a ser " << aumento;
		
	}else if (salario >1500){
		aumento = salario*1.05;
		cout << "O salario era " << salario << " e passou a ser " << aumento;
		
	}
	
}
