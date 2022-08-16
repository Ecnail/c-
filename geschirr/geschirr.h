using namespace std;

class geschirr
{
  float groesse;
  string farbe;
  string material;
  float preis;

  public:

  geschirr(float g, string f, string m, float p) :
    groesse(g),
    farbe(f),
    material(m),
    preis(p)
  {}

  float getGroesse()
  {
    return groesse;
  }

  string getFarbe()
  {
    return farbe;
  }

  string getMaterial()
  {
    return material;
  }

  float getPreis()
  {
    return preis;
  }

  void setPreis(float p)
  {
    preis = p;
  }
};


class teller : public geschirr
{
  bool flach;

  public:

  teller(float g, string f, string m, float p, bool fl) :
    geschirr(g, f, m, p),
    flach(fl)
  {}

  bool getFlach()
  {
    return flach;
  }
};
