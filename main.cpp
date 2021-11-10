// Banque.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "declaration.cpp"

int main()
{
    char* p;
    p = (char*)malloc(sizeof(char) * 4);
    cin >> p;
    Compte c(10000, 2,p);
    c.ConsulterSolde();
    c.RetirerArgent(100);
    c.ConsulterSolde();
    c.DeposerArgent(200);
    c.ConsulterSolde();
    cin >> p;
    Compte c2(2000,3,p);
    c2.ConsulterSolde();
    c2=c.TransfererArgent(1000,c2);
    c2.ConsulterSolde();

}
