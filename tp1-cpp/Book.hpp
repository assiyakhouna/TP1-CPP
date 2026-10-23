
#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book {
private:
    std::string m_titre;
    std::string m_auteur;
    std::string m_isbn;
    int m_annee;

public:
    // Constructeur par defaut
    Book();

    // Constructeur parametre
    Book(const std::string& titre,
         const std::string& auteur,
         const std::string& isbn,
         int annee);

    // Getters
    std::string getTitre() const;
    std::string getAuteur() const;
    std::string getISBN() const;
    int getAnnee() const;

    // Afficher les informations du livre
    void afficher() const;
};

#endif
