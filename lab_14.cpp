#include <iomanip>  // what's this for? in sample code
#include <iostream>
using namespace std;

class Color {
 private:
  int red;
  int green;
  int blue;

 public:
  int getRed() { return red; }
  void setRed(int r) { red = r; }
  int getBlue() { return green; }
  void setBlue(int g) { green = g; }
  int getBlue() { return blue; }
  void setBlue(int b) { blue = b; }
};

void print(Color);

int main() {
  cout << fixed << setprecision(2);
  // I lookd up RGB values of colors I like
  // Color 1

  return 0;
}