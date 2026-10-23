
#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "Book.hpp"
#include <vector>
#include <string>

class Library {
private:
    std::vector<Book> m_livres;

public:
    // Ajouter un livre
    void ajouterLivre(const Book& livre);

    // Chercher un livre par ISBN
    Book* trouverParISBN(const std::string& isbn);

    // Afficher tous les livres
    void listerLivres() const;
};

#endif
