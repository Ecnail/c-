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
  
  tasse Tasse1 = tasse(9.76, "gruen", "Ton", 3.99, false);
  cout << "Groesse: " << Tasse1.getGroesse() << " | ";
  cout << "Farbe: " << Tasse1.getFarbe() << " | ";
  cout << "Material: " << Tasse1.getMaterial() << " | ";
  cout << "Preis: " << Tasse1.getPreis() << " | ";
  cout << "Untertasse: " << Tasse1.getUntertasse() << endl << endl;
  
  schuessel Schuessel1 = schuessel(18, "blau", "Gibs", 5.19, true);
  cout << "Groesse: " << Schuessel1.getGroesse() << " | ";
  cout << "Farbe: " << Schuessel1.getFarbe() << " | ";
  cout << "Material: " << Schuessel1.getMaterial() << " | ";
  cout << "Preis: " << Schuessel1.getPreis() << " | ";
  cout << "Deckel: " << Schuessel1.getDeckel() << endl << endl;
  
  glass Glass1 = glass(8.97, "rot", "Plastik", 2.99, 200);
  cout << "Groesse: " << Glass1.getGroesse() << " | ";
  cout << "Farbe: " << Glass1.getFarbe() << " | ";
  cout << "Material: " << Glass1.getMaterial() << " | ";
  cout << "Preis: " << Glass1.getPreis() << " | ";
  cout << "Inhalt: " << Glass1.getInhalt() << endl << endl;

  mitarbeiter Mitarbeiter1 = mitarbeiter("Tim", "Kutzner", 5, 10.99);
  Mitarbeiter1.show();
};
