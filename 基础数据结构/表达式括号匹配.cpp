#include <bits/stdc++.h>
using namespace std;

char c, n = 0;

int main() {
  while (c = getchar(), c != '@') {
    if (c == '(') n++;
    if (c == ')') n--;
    if (n < 0) break;
  }
  if (n)
    cout << "NO";
  else
    cout << "YES";
  return 0;
}