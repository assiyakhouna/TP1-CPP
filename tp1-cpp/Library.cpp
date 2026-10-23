
#include "Library.hpp"
#include <iostream>

using namespace std;

// Ajouter un livre a la bibliotheque
void Library::ajouterLivre(const Book& livre) {
    m_livres.push_back(livre);
    cout << "Livre ajoute avec succes !" << endl;
}

// Chercher un livre par son ISBN
Book* Library::trouverParISBN(const string& isbn) {
    for (Book& livre : m_livres) {
        if (livre.getISBN() == isbn) {
            return &livre;
        }
    }

    return nullptr;
}

// Afficher tous les livres
void Library::listerLivres() const {
    if (m_livres.empty()) {
        cout << "La bibliotheque est vide." << endl;
        return;
    }

    cout << "\n=== Liste des livres ===" << endl;

    for (const Book& livre : m_livres) {
        livre.afficher();
        cout << "--------------------" << endl;
    }
}
