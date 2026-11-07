#include <bits/stdc++.h>
using namespace std;
#define int long long
string c1, s1, c2, s2;
string ss1;
string ss2;
string sss1;
string sss2;
bool pan = true;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << "1";
	else {
		cout << "0";
		pan = false;
	}
	for (int i = 0; i < s1.size() - 1; i++)
		ss1 += s1[i];
	for (int i = 0; i < s2.size() - 1; i++)
		ss2 += s2[i];
	if (c1 == c2 && ss1 == ss2)
		cout << "1";
	else {
		cout << "0";
		pan = false;
	}
	sss1 = s1[s1.size() - 1];
	sss2 = s2[s2.size() - 1];
	if (c1 == c2 && ss1 == ss2 && ((("D" <= sss1 && sss1 <= "F") && ("D" <= sss2 && sss2 <= "F")) || (("A" <= sss2
	                               && sss2 <= "C") && ("A" <= sss1 && sss1 <= "C"))))
		cout << "1";
	else {
		cout << "0";
		pan = false;
	}
	if (pan == true && ((sss1 == "F" && sss2 == "D") || (sss1 == "C" && sss2 == "B") || (sss1 == "B" && sss2 == "A")
	                    || (sss2 == "F" && sss1 == "D") || (sss2 == "C" && sss1 == "B") || (sss2 == "B" && sss1 == "A")))
		cout << "1";
	else
		cout << "0";
	return 0;
}