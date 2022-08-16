#include <iostream>
#include <string>
#include "geschirr/geschirr.h"
#include "mitarbeiter/mitarbeiter.h"

using namespace std;

int main ()
{
  teller Teller1 = teller(21, "braun", "Porzellan", 4.99, true);

  cout << "Groesse: " << Teller1.getGroesse() << " | ";
  cout << "Farbe: " << Teller1.getFarbe() << " | ";
  cout << "Material: " << Teller1.getMaterial() << " | ";
  cout << "Preis: " << Teller1.getPreis() << " | ";
  cout << "Flach: " << Teller1.getFlach() << endl << endl;

  mitarbeiter Mitarbeiter1 = mitarbeiter("Tim", "Kutzner", 5, 10.99);

  cout << "Vorname: " << Mitarbeiter1.getVorname() << " | ";
  cout << "Nachname: " << Mitarbeiter1.getNachname() << " | ";
  cout << "Mitarbeiternummer: " << Mitarbeiter1.getMitarbeiternummer() << " | ";
  cout << "Gehalt: " << Mitarbeiter1.getGehalt() << endl << endl;
};
