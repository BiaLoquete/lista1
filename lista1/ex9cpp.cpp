#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");  
	
	int n, sum = 0, temp, r;
 
      
    cout << "Informe um n�mero de 3 d�gitos: ";     
    cin>>n;
 
    temp = n;
 
    while( temp != 0 )
      {
         r = temp%10;
         sum = sum + r*r*r;
         temp = temp/10; 
      }
 
    if ( n == sum ){
    	cout << "O n�mero informado � um n�mero armstrong";
	}else{
		cout << "O n�mero informado n�o � um n�mero armstrong";
	}
}
        
	
	

