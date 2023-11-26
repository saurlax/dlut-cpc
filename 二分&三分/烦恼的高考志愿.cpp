#include <bits/stdc++.h>
using namespace std;

int m, n, stu, school[100010];
long long ans = 0;

int main() {
  cin >> m >> n;
  for (int i = 0; i < m; i++) cin >> school[i];
  sort(school, school + m);
  for (int i = 0; i < n; i++) {
    cin >> stu;
    int *s1 = lower_bound(school, school + m, stu), *s2 = s1 - 1;
    if (s1 == school + m)
      ans += abs(*s2 - stu);
    else if (s1 == school)
      ans += abs(*s1 - stu);
    else
      ans += min(abs(*s1 - stu), abs(*s2 - stu));
  }
  cout << ans;
  return 0;
}