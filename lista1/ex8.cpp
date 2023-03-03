#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float cgr, mnt, anos, dias, totalCig, diasMin, diasVida;
	string nome;
	
	cout << "Informe seu nome: ";
	cin >> nome;
	
	cout << "Informe a quantidade de cigarros que você fuma por dia: ";
	cin >> cgr;
	
    cout << "Informe a quantidade de anos que você fuma: ";
	cin >> anos;
	
	dias = anos *365;
	totalCig = cgr * dias;
	diasMin = dias *1440;
	diasVida = (totalCig*10)/1440;
	
	cout << "Voc~E já perdeu "<<diasVida<<" dias de vida!";
	
}
