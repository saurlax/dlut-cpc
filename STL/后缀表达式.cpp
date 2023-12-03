#include <bits/stdc++.h>
using namespace std;

char c;
int tmp;
stack<int> s;

int main() {
  while ((c = getchar()) != '@') {
    if (c >= '0' && c <= '9') {
      tmp = c - '0';
      while ((c = getchar()) != '.') {
        tmp = tmp * 10 + c - '0';
      }
      s.push(tmp);
    } else {
      tmp = s.top();
      s.pop();
      if (c == '+')
        s.top() += tmp;
      else if (c == '-')
        s.top() -= tmp;
      else if (c == '*')
        s.top() *= tmp;
      else if (c == '/')
        s.top() /= tmp;
    }
  }
  cout << s.top();
  return 0;
}