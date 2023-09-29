
#include "criptografia.hpp"

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
