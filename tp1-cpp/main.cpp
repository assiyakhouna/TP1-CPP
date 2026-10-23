#include "BankAccount.hpp"

using namespace std;

int main() {
    // Creer un compte bancaire
    BankAccount compte1("12345", 1000.0);

    // Afficher le compte au debut
    cout << "=== Informations initiales ===" << endl;
    compte1.afficher();

    // Deposer de l'argent
    cout << "\n=== Depot de 500 DH ===" << endl;
    compte1.deposer(500.0);

    // Retirer de l'argent
    cout << "\n=== Retrait de 200 DH ===" << endl;
    compte1.retirer(200.0);

    // Afficher le solde final
    cout << "\n=== Informations finales ===" << endl;
    compte1.afficher();

    return 0;
}