#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");  
	
	int n1, n2, n3; 
	
	cout << "Informe um n�mero: ";
	cin>> n1;
	cout << "Informe outro n�mero: ";
	cin >> n2;
	cout << "Informe mais um n�mero: ";
	cin >> n3;
	
	if (n1<n2 && n1<n3 && n2<n3){
		cout << "A ordem crescente �: "<<n1<<n2<<n3;
	}else if (n1<n2 && n1<n3 && n2>n3){
		cout << "A ordem crescente �: "<<n1<<n3<<n2;
	}else if (n2<n1 && n2<n3 && n1>n3){
		cout << "A ordem crescente �: "<<n2<<n3<<n1;
    }else if (n2<n1 && n2<n3 && n3>n1){
		cout << "A ordem crescente �: "<<n2<<n1<<n3;
    }else if (n3<n1 && n3<n2 && n2>n1){
		cout << "A ordem crescente �: "<<n3<<n1<<n2;
    }else if (n3<n1 && n3<n2 && n1>n2){
		cout << "A ordem crescente �: "<<n3<<n2<<n1;
   } 
	
}
  
    
