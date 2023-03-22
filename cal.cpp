#include <iostream>
using namespace std;

int main() {
  char a;
  int i = 0;
  while (i < 1) {
    cout << "Do you want to end the loop? ";
    cin >> a;
    if (a == 'y') {
      i = i + 1;
    }
  }
  return 0;
}
