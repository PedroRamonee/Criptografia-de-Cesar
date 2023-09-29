/*
CIFRA DE CÉSAR

    a Cifra de César, também conhecida como cifra de troca, código de César ou
    troca de César, é uma das mais simples e conhecidas técnicas de criptografia. É
    um tipo de cifra de substituição na qual cada letra do texto é substituída por
    outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes. Por
    exemplo, com uma troca de três posições, A seria substituído por D, B se
    tornaria E, e assim por diante.
*/

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void descriptografar(string &palavra, int chave) {
    for (int i = 0; i < palavra.size(); i++) {
        int j = 0;
        if (palavra[i] != ' ') {
            if (chave > 0) {
                while (j < chave) {
                    if (palavra[i] != 'a') {
                        palavra[i]--;
                    } else {
                        palavra[i] = 'z';
                    }

                    j++;
                }
            } else {
                while (j > chave) {
                    if (palavra[i] != 'z') {
                        palavra[i]++;
                    } else {
                        palavra[i] = 'a';
                    }

                    j--;
                }
            }
        }
    }
}

void troca(string &palavra, int chave) {
    for (int i = 0; i < palavra.size(); i++) {
        tolower(palavra[i]);

        int j = 0;
        if (palavra[i] != ' ') {
            if (chave > 0) {
                while (j < chave) {
                    if (palavra[i] != 'z') {
                        palavra[i]++;
                    } else {
                        palavra[i] = 'a';
                    }
                    j++;
                }
            } else {
                while (j > chave) {
                    if (palavra[i] != 'a') {
                        palavra[i]--;
                    } else {
                        palavra[i] = 'z';
                    }

                    j--;
                }
            }
        }
    }
}

int main() {
    string Palavra;
    int chave = 0;

    cout << "Digite a palavra a ser criptografada:" << endl;

    getline(cin, Palavra);

    cout << "Digite a chave de criptografia:" << endl;
    cin >> chave;

    cout << "\nPalavra pre cifra de cesar: " << Palavra << endl;
    troca(Palavra, chave);
    cout << " \nPalavra pos cifra de cesar: " << Palavra << endl;

    cout << " \nDescriptografando: " << Palavra << endl;
    descriptografar(Palavra, chave);
    cout << " \nPalavra descriptografada: " << Palavra << endl;

    return 0;
}