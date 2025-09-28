#include <iomanip>  // what's this for? in sample code
#include <iostream>
using namespace std;

class Color {
 private:
  int red;
  int green;
  int blue;
  string name;

 public:
  int getRed() { return red; }
  void setRed(int r) { red = r; }
  int getGreen() { return green; }
  void setGreen(int g) { green = g; }
  int getBlue() { return blue; }
  void setBlue(int b) { blue = b; }
  string getName() { return name; }
  void setName(string n) { name = n; }
};

void print(Color);

int main() {
  cout << fixed << setprecision(2);
  // I lookd up RGB values of colors I like
  // Color 1
  Color burgundy;
  burgundy.setName("Burgundy");
  burgundy.setRed(128);
  burgundy.setGreen(0);
  burgundy.setBlue(32);
  // burgundy.print(); //does this work?
  print(burgundy);

  Color viridian;
  v.setName("Burgundy");
  viridian.setRed(64);
  viridian.setGreen(130);
  viridian.setBlue(109);
  // viridian.print(); //does this work?
  print(viridian);

  return 0;
}

void print(Color s){cout << "(" << s.getRed() << s.getGreen() << ", "
                         << s.getBlue() << " )"}