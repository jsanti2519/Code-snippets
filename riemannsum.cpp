#include <iostream>
using namespace std;

double f(double x) {
   return x * x;
}

float area(double a, double b) {
   double delta = 0.000001;
   double x = a;
   double riemannSum;
   while(x < b) {
      riemannSum += delta * f(x);
      x += delta;
   }
   return (float)riemannSum;
}

int main() {
    cout << area(3, 5) << endl;
    cout << area(3, 7) << endl;
}
