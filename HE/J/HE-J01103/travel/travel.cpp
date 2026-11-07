#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("travel.in", "r", stdin);
  freopen("travel.out", "w", stdout);

  int c1, c2;
  string s1, s2;
  int r1, r2;
  char l1, l2;
  cin >> c1 >> s1 >> c2 >> s2;
  r1 = stoi(s1.substr(0, 2));
  r2 = stoi(s2.substr(0, 2));
  l1 = s1[2], l2 = s2[2];

  if (c1 == c2) {
    cout << 1;
    if (r1 == r2) {
      cout << 1;
      if ((l1 < 'D' && l2 < 'D') || (l1 >= 'D' && l2 >= 'D')) {
	cout << 1;
	if (abs(l1 - l2) == 1) {
	  cout << 1;
	} else cout << 0;
      } else cout << 0 << 0;
    } else cout << 0 << 0 << 0;
  } else cout << 0 << 0 << 0 << 0;
  // omg what is this

  fclose(stdin);
  fclose(stdout);
  return 0;
}
