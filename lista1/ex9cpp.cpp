#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");  
	
	int n, sum = 0, temp, r;
 
      
    cout << "Informe um número de 3 dígitos: ";     
    cin>>n;
 
    temp = n;
 
    while( temp != 0 )
      {
         r = temp%10;
         sum = sum + r*r*r;
         temp = temp/10; 
      }
 
    if ( n == sum ){
    	cout << "O número informado é um número armstrong";
	}else{
		cout << "O número informado não é um número armstrong";
	}
}
        
	
	

