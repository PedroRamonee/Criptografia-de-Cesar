#include "src/criptografia.hpp"

int main() {
    string Palavra;
    int chave = 0;
    int control = 0;

    cout << "Digite a palavra/frase a ser criptografada ou descriptografada:"
         << endl;

    getline(cin, Palavra);

    cout << "Digite a chave de criptografia:" << endl;

    cin >> chave;

    cout << "Digite:\n 1 para criptografar\n 2 para descriptografar" << endl;

    cin >> control;

    if (control == 1) {
        cout << "\nPalavra pre cifra de cesar: " << Palavra << endl;
        troca(Palavra, chave);
        cout << " \nPalavra pos cifra de cesar: " << Palavra << "\n" << endl;
    } else if (control == 2) {
        cout << " \nDescriptografando: " << Palavra << endl;
        descriptografar(Palavra, chave);
        cout << " \nPalavra descriptografada: " << Palavra << "\n" << endl;
    } else {
        cout << "chave invalida" << endl;
    }

    return 0;
}