#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");

    int aux, num, div=0;
    
    cout << "Informe um n�mero: ";
    cin>> num;

    for(aux=2 ; aux<=num/2 ; aux++)
        if(num%aux==0)
            div++;

    if(div==0)
        cout<<"� um n�mero primo"<<endl;
    else
        cout<<"N�o � um n�mero primo"<<endl;
    return 0;
}
