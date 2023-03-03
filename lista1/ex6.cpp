#include <iostream>

using namespace std;

int main() {
	setlocale (LC_ALL, "Portuguese");
    int num, soma = 0;

    cout << "Digite um número inteiro de três dígitos: ";
    cin >> num;

    if (num < 100 || num > 999) {
        cout << "Número inválido" << endl;
        return 0;
    }

    soma += num % 10;
    num /= 10;
    soma += num % 10;
    num /= 10;
    soma += num;

    cout << "A soma dos dígitos do número é: " << soma << endl;

    return 0;
}

