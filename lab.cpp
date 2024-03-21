#include <iostream>

using namespace std;

int sum = 0;

void calculateSum(int n) {
  for (int i = 20; i <= 2*n-1; i++) {
    sum += i;
  }
}

int main() {
  int n;
  cout << "Введіть n: ";
  cin >> n;

  calculateSum(n);

  cout << "Сума: " << sum << endl;

  return 0;
}
    
