
#include "Library.hpp"
#include <iostream>

using namespace std;

int main() {
    // Creer une bibliotheque
    Library bibliotheque;

    // Creer des livres
    Book livre1("Le Petit Prince", "Antoine de Saint-Exupery",
                "ISBN001", 1943);

    Book livre2("Les Miserables", "Victor Hugo",
                "ISBN002", 1862);

    Book livre3("L'Etranger", "Albert Camus",
                "ISBN003", 1942);

    // Ajouter les livres
    cout << "=== Ajout des livres ===" << endl;
    bibliotheque.ajouterLivre(livre1);
    bibliotheque.ajouterLivre(livre2);
    bibliotheque.ajouterLivre(livre3);

    // Afficher tous les livres
    bibliotheque.listerLivres();

    // Rechercher un livre par ISBN
    cout << "\n=== Recherche d'un livre ===" << endl;

    Book* resultat = bibliotheque.trouverParISBN("ISBN002");

    if (resultat != nullptr) {
        cout << "Livre trouve :" << endl;
        resultat->afficher();
    } else {
        cout << "Livre introuvable." << endl;
    }

    return 0;
}
