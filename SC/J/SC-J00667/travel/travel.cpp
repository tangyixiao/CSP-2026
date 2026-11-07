#include<bits/stdc++.h>
#define ll long long
using namespace std;
char c1[5], s1[5], c2[5], s2[5];
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int Rche = (c1[0] - '0') * 10 + (c1[1] - '0');
	int Xche = (c2[0] - '0') * 10 + (c2[1] - '0');
	if (Rche == Xche) cout << "1";
	else {
		cout << "0000";
		return 0;
	}
	int Rpai = (s1[0] - '0') * 10 + (s1[1] - '0');
	int Xpai = (s2[0] - '0') * 10 + (s2[1] - '0');
	if (Rpai == Xpai) cout << "1";
	else {
		cout << "000";
		return 0;
	}
	int Rwei = s1[2] - 'A' + 1;
	int Xwei = s2[2] - 'A' + 1;
	if ((Rwei <= 3 && Xwei <= 3) || (Rwei >= 4 && Xwei >= 4))
		cout << "1";
	else {
		cout << "00";
		return 0;
	}
	if (fabs(Rwei - Xwei) == 1) cout << "1";
	else cout << "0";
	return 0;
}