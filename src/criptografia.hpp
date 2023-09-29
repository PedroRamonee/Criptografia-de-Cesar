/*
CIFRA DE CÉSAR

    a Cifra de César, também conhecida como cifra de troca, código de César ou
    troca de César, é uma das mais simples e conhecidas técnicas de
criptografia. É um tipo de cifra de substituição na qual cada letra do texto é
substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo
de vezes. Por exemplo, com uma troca de três posições, A seria substituído por
D, B se tornaria E, e assim por diante.
*/

#ifndef CRIPTOGRAFIA_HPP_
#define CRIPTOGRAFIA_HPP_

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void descriptografar(string &palavra, int chave);
void troca(string &palavra, int chave);

#endif  // CRIPTOGRAFIA_HPP_
