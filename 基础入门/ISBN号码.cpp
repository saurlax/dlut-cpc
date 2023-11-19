#include <bits/stdc++.h>
using namespace std;

int main() {
  string isbn;
  int sum = 0, coe = 1;
  cin >> isbn;
  for (int i = 0; i < 11; i++) {
    if (isbn[i] == '-') continue;
    sum += (isbn[i] - '0') * coe;
    coe++;
  }

  char verify = sum % 11 == 10 ? 'X' : sum % 11 + '0';
  if (verify == isbn[12]) {
    cout << "Right";
  } else {
    isbn[12] = verify;
    cout << isbn;
  }
  return 0;
}