// main.cpp

#include <iostream>
#include "pangramma.h"

int main() {
    // Dichiarazione della variabile per la frase
    char frase[256];

    // Acquisizione della frase dalla prompt dei comandi
    std::cout << "Inserisci una frase: ";
    std::cin.getline(frase, sizeof(frase));

    // Variabile per le lettere mancanti
    std::string lettereMancanti;

    // Chiamata alla funzione isPangrammaItaliano
    if (isPangrammaItaliano(frase, lettereMancanti)) {
        std::cout << "La frase e' un pangramma italiano." << std::endl;
    }
    else {
        std::cout << "La frase non e' un pangramma italiano. Lettere mancanti: " << lettereMancanti << std::endl;
    }

    return 0;
}
