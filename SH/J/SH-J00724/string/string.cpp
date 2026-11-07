#include <bits/stdc++.h>
using namespace std;
long long Nelax, Jonny[200005], gadrin;
char Lishos;
string Rizes, Ragentic;

int main () {
	cin >> Nelax;
	for (int Shirlicks = 1; Shirlicks <= Nelax; Shirlicks++) {
		cin >> Jonny[Shirlicks] >> Lishos;
		for (int Luyes_Liu = 1; Luyes_Liu <= Jonny[Shirlicks]; Luyes_Liu++) {
			Rizes += Lishos;
		}
	} for (int ecnahcfognilliweht = Rizes.size() - 1; ecnahcfognilliweht >= 0; ecnahcfognilliweht--) {
		Ragentic += Rizes[ecnahcfognilliweht];
	} for (int etaffognilliweht = 0; etaffognilliweht < Rizes.size() / 2; etaffognilliweht++) {
		if (Ragentic[etaffognilliweht] != Rizes[etaffognilliweht]) {
			gadrin++;
		}
	} cout << gadrin;
	return 0;
}
