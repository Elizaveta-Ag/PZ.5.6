#include <iostream>
using namespace std;

int main() {
  int a;
cin >> a;
if (a <= 2 && a > 0){
  cout << "Not allowed";
}
else if (a >= 3 && a <= 5){
  cout << "Allowed";
}

return 0;
}
