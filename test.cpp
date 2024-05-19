#include <iostream>

using namespace std;
// a = 2, b = 1
// a = a + b
// a = 3
// b = a - b
// b = 2
// a = a - b
// a = 1
int main() {
  int X, Y, Z, T;
  cin >> X >> Y >> Z >> T;

  if ((T - 2 * Z * Y) % (2 * Y + X) != 0) {
    cout << "No solution";
    return 0;
  }

  int N = (T - 2 * Z * Y) / (2 * Y + X);

  cout << N;

  return 0;
}
