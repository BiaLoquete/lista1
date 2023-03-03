#include <iostream>

using namespace std;

int main() {
	setlocale (LC_ALL, "Portuguese");
    int num, soma = 0;

    cout << "Digite um n�mero inteiro de tr�s d�gitos: ";
    cin >> num;

    if (num < 100 || num > 999) {
        cout << "N�mero inv�lido" << endl;
        return 0;
    }

    soma += num % 10;
    num /= 10;
    soma += num % 10;
    num /= 10;
    soma += num;

    cout << "A soma dos d�gitos do n�mero �: " << soma << endl;

    return 0;
}

