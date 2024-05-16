// pangramma.cpp

#include "pangramma.h"
#include <cctype>
#include <iostream>

bool isPangrammaItaliano(const char* frase, std::string& lettereMancanti) {
    // Dichiarazione dell'alfabeto italiano
    const char alfabetoItaliano[] = "abcdefghijklmnopqrstuvwxyz";

    // Inizializzazione dell'array di controllo
    bool letterePresenti[26] = { false };

    // Scorrimento della frase per verificare la presenza di ogni lettera
    for (size_t i = 0; i < std::strlen(frase); ++i) {
        char carattere = std::tolower(frase[i]); // Converte il carattere in minuscolo

        // Verifica se il carattere è una lettera dell'alfabeto italiano
        if (std::isalpha(carattere)) {
            // Calcola l'indice del carattere nell'alfabeto italiano
            size_t indice = carattere - 'a';

            // Imposta a true la posizione corrispondente nell'array di controllo
            letterePresenti[indice] = true;
        }
    }

    // Verifica se tutte le lettere dell'alfabeto italiano sono presenti
    bool pangramma = true;
    for (size_t i = 0; i < 26; ++i) {
        if (!letterePresenti[i]) {
            pangramma = false;
            lettereMancanti += static_cast<char>('a' + i); // Aggiungi la lettera mancante
        }
    }

    return pangramma;
}
