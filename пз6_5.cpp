#include <iostream>
#include <cmath>
using namespace std;

int main;
  int a;
int b;
int c;
cin >> a;
cin >> b;
cin >> c;

if (a == 0){
  cout << "Уравнение не квадратное";
  return 0;
}
else if (d == 0){
  int x = -b / (2 * a);
  cout << "One root: " << x;
  return 0;
}
else if (d < 0){
  cout << "No roots";
  return 0;
}
else if (d > 0){
  double dd = sqrt(d);
  int x1 = (-b + dd) / (2 * a);
  int x2 = (-b - dd) / (2 * a);
  cout << "Two roots: " << x1 << " and " << x2;
}
}
