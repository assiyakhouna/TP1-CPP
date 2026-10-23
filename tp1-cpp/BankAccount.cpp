#include "BankAccount.hpp"

using namespace std;

// Constructeur par défaut
BankAccount::BankAccount() {
    m_numero = "0000";
    m_solde = 0.0;
}

// Constructeur paramétré
BankAccount::BankAccount(const string& numero, double soldeInitial) {
    m_numero = numero;
    m_solde = soldeInitial;
}

// Déposer de l'argent
void BankAccount::deposer(double montant) {
    if (montant > 0) {
        m_solde += montant;
        cout << "Depot effectue avec succes." << endl;
    } else {
        cout << "Montant invalide." << endl;
    }
}

// Retirer de l'argent
bool BankAccount::retirer(double montant) {
    if (montant > 0 && montant <= m_solde) {
        m_solde -= montant;
        cout << "Retrait effectue avec succes." << endl;
        return true;
    }

    cout << "Retrait impossible." << endl;
    return false;
}

// Afficher les informations du compte
void BankAccount::afficher() const {
    cout << "Numero du compte : " << m_numero << endl;
    cout << "Solde : " << m_solde << endl;
}

// Retourner le numero du compte
string BankAccount::getNumero() const {
    return m_numero;
}

// Retourner le solde
double BankAccount::getSolde() const {
    return m_solde;
}