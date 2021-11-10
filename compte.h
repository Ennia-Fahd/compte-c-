#pragma once
class Compte {
private:
	int numCompte;
	char* nomProprietaire;
	double solde;
public:
	bool RetirerArgent(double sol);
	double DeposerArgent(double solde2);
	void ConsulterSolde();
	Compte TransfererArgent(double somme, Compte c);
	Compte(double solde, int num, char* nom);

};
