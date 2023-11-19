#include <bits/stdc++.h>
using namespace std;

int n;
double ans = 0;
struct Person {
  int id;
  int time;
} people[1010];

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    people[i].id = i + 1;
    cin >> people[i].time;
  }
  sort(people, people + n, [](Person a, Person b) { return a.time < b.time; });
  for (int i = 0; i < n; i++) {
    cout << people[i].id << " ";
    ans += people[i].time * (n - i - 1);
  }
  printf("\n%.2lf", ans / n);
  return 0;
}