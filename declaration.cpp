#include "compte.h";
#include <iostream>
using namespace std;

bool Compte::RetirerArgent(double sol) {
	this->solde -= sol;
	if (this->solde >= 0) { return true; }
	else {
		return false;
	}

}

double Compte::DeposerArgent(double solde2) {
	this->solde += solde2;
	return this->solde;
}

void Compte::ConsulterSolde() {
	cout << "Le solde actuel de "<< this->nomProprietaire <<"est de " << this->solde << endl;
}

Compte Compte::TransfererArgent(double somme, Compte c) {
	c.solde += somme;
	return c;
}

Compte :: Compte(double solde, int num, char* nom) {
	this->solde = solde;
	this->numCompte = num;
	strcpy(this->nomProprietaire, nom);
}
