#include <iostream>

using namespace std;

int main() {
	setlocale (LC_ALL, "Portuguese");
    int idade, cigarrosPorDia;
    long long diasDeVidaPerdidos;

    cout << "Digite a sua idade: ";
    cin >> idade;

    cout << "Digite a quantidade de cigarros que você fuma por dia: ";
    cin >> cigarrosPorDia;

    diasDeVidaPerdidos = (cigarrosPorDia * 10 * 365 * idade) / (24 * 60);

    cout << "Você perdeu " << diasDeVidaPerdidos << " dias de vida" << endl;

    return 0;
}

