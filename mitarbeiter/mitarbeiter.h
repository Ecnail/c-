using namespace std;

class mitarbeiter
{
  string vorname;
  string nachname;
  int mitarbeiternummer;
  float gehalt;

  public:

  mitarbeiter(string v, string n, int m, float g) :
    vorname(v),
    nachname(n),
    mitarbeiternummer(m),
    gehalt(g)
  {}

  string getVorname()
  {
    return vorname;
  }

  string getNachname()
  {
    return nachname;
  }

  int getMitarbeiternummer()
  {
    return mitarbeiternummer;
  }

  float getGehalt()
  {
    return gehalt;
  }

  void setGehalt(float g)
  {
    gehalt = g;
  }
};
