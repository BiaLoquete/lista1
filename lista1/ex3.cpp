#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");

    int aux, num, div=0;
    
    cout << "Informe um número: ";
    cin>> num;

    for(aux=2 ; aux<=num/2 ; aux++)
        if(num%aux==0)
            div++;

    if(div==0)
        cout<<"É um número primo"<<endl;
    else
        cout<<"Não é um número primo"<<endl;
    return 0;
}
