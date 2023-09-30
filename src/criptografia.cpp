
#include "criptografia.hpp"

void descriptografar(string &palavra, int chave) {
    for (int i = 0; i < palavra.size(); i++) {
        int j = 0;
        if (palavra[i] != ' ') {
            if (chave > 0) {
                while (j < chave) {
                    if (palavra[i] != 'a' && palavra[i] != 'A') {
                        palavra[i]--;
                    } else {
                        if (palavra[i] == 'a') {
                            palavra[i] = 'z';
                        } else {
                            palavra[i] = 'Z';
                        }
                    }

                    j++;
                }
            } else {
                while (j > chave) {
                    if (palavra[i] != 'z' && palavra[i] != 'Z') {
                        palavra[i]++;
                    } else {
                        if (palavra[i] == 'z') {
                            palavra[i] = 'a';
                        } else {
                            palavra[i] = 'A';
                        }
                    }

                    j--;
                }
            }
        }
    }
}

void troca(string &palavra, int chave) {
    for (int i = 0; i < palavra.size(); i++) {
        int j = 0;
        if (palavra[i] != ' ') {
            if (chave > 0) {
                while (j < chave) {
                    if (palavra[i] != 'z' && palavra[i] != 'Z') {
                        palavra[i]++;
                    } else {
                        if (palavra[i] == 'z') {
                            palavra[i] = 'a';
                        } else {
                            palavra[i] = 'A';
                        }
                    }
                    j++;
                }
            } else {
                while (j > chave) {
                    if (palavra[i] != 'a' && palavra[i] != 'A') {
                        palavra[i]--;
                    } else {
                        if (palavra[i] == 'a') {
                            palavra[i] = 'z';
                        } else {
                            palavra[i] = 'Z';
                        }
                    }

                    j--;
                }
            }
        }
    }
}
