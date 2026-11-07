#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+5;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string myr, myrr, myx, myxx;
	cin >> myr >> myrr >> myx >> myxx;
	if (myr == myx) {
		cout << "1";
		string s1, s2, s3, s4;
		s1 = myrr[0];
		s1 += myrr[1];
		s2 = myxx[0];
		s2 += myxx[1];
		s3 = myrr[2];
		s4 = myxx[2];
		if (s1 == s2) {
			cout << "1";
			if (s3 == "A") {
				if (s4 == "B")
					cout << "11";
				if (s4 == "C")
					cout << "10";
				if (s4 == "D")
					cout << "00";
				if (s4 == "F")
					cout << "00";
			} else if (s3 == "B") {
				if (s4 == "A")
					cout << "11";
				if (s4 == "C")
					cout << "11";
				if (s4 == "D")
					cout << "00";
				if (s4 == "F")
					cout << "00";
			} else if (s3 == "C") {
				if (s4 == "B")
					cout << "11";
				if (s4 == "A")
					cout << "10";
				if (s4 == "D")
					cout << "00";
				if (s4 == "F")
					cout << "00";
			} else if (s3 == "D") {
				if (s4 == "A")
					cout << "00";
				if (s4 == "B")
					cout << "00";
				if (s4 == "C")
					cout << "00";
				if (s4 == "F")
					cout << "11";
			} else if (s3 == "F") {
				if (s4 == "A")
					cout << "00";
				if (s4 == "B")
					cout << "00";
				if (s4 == "C")
					cout << "00";
				if (s4 == "D")
					cout << "11";
			}
		} else
			cout << "000";
	} else {
		cout << "0000";
	}
	return 0;
}