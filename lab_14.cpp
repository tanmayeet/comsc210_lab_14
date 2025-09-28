// COMSC210 | Lab 14 | Tanmayee Chalamalasetti
// IDE Used: VS Code

#include <iostream>
using namespace std;

// Here
class Color {
 private:
  int red;
  int green;
  int blue;
  string name;

 public:
  string getName() { return name; }
  void setName(string n) { name = n; }
  int getRed() { return red; }
  void setRed(int r) { red = r; }
  int getGreen() { return green; }
  void setGreen(int g) { green = g; }
  int getBlue() { return blue; }
  void setBlue(int b) { blue = b; }

  void print() {
    cout << name << ": (" << red << ", " << green << ", " << blue << ")\n";
  }
};

int main() {
  // I lookd up RGB values of colors I like
  // Color 1
  Color burgundy;
  // Set name and RGB values of Burgundy
  burgundy.setName("Burgundy");
  burgundy.setRed(128);
  burgundy.setGreen(0);
  burgundy.setBlue(32);
  burgundy.print();

  Color viridian;
  // Set name and RGB values of Viridian
  viridian.setName("Viridian");
  viridian.setRed(64);
  viridian.setGreen(130);
  viridian.setBlue(109);
  viridian.print();  // calls the print function we initialized in the public

  return 0;
}