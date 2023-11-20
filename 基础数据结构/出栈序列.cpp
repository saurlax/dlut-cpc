#include <bits/stdc++.h>
using namespace std;

int n, c, len = 0;
int arr[10010], stk[10010];

int main() {
  cin >> n >> c;
  for (int i = 0; i < n; i++) cin >> arr[i];
  for (int* i = arr; i < arr + n;) {
    if (len == 0) {
      stk[len++] = *i++;
      continue;
    }
    if (len == c) {
      cout << stk[--len] << " ";
      continue;
    }
    int* arr_min = min_element(i, min(i + c - len, arr + n));
    if (stk[len - 1] <= *arr_min) {
      cout << stk[--len] << " ";
    } else {
      while (i <= arr_min) stk[len++] = *i++;
    }
  }
  while (len) cout << stk[--len] << " ";
  return 0;
}