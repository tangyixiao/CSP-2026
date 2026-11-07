#include <bits/stdc++.h>
using namespace std;

struct node {
	int che ;
	string zuo;
	int zshu;
	char zzi;
	int zenz;
};
node a;
node b;
int lin1, lin2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a.che >> a.zuo >> b.che >> b.zuo;
	int len1 = a.zuo.size();

	for (int i = 0; i <= len1 - 1; i++) {
		if (i == 0)
			lin1 = a.zuo[i];
		else if (i == 1)
			lin2 = a.zuo[i];
		else
			a.zzi = a.zuo[i];
	}
	a.zshu = 10 * lin1 + lin2;
	int len2 = b.zuo.size();
	for (int i = 0; i <= len2 - 1; i++) {
		if (i == 0)
			lin1 = b.zuo[i];
		else if (i == 1)
			lin2 = b.zuo[i];
		else
			b.zzi = b.zuo[i];
	}
	b.zshu = 10 * lin1 + lin2;
	a.zenz = a.zzi - 64;
	b.zenz = b.zzi - 64;
	if (a.che == b.che)
		cout << 1;
	else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	if (a.zshu == b.zshu) {
		cout << 1;
		if (a.zenz == 1 || a.zenz == 2 || a.zenz == 3) {
			if (b.zenz == 1 || b.zenz == 2 || b.zenz == 3) {
				cout << 1;
				if (a.zenz + 1 == b.zenz || a.zenz - 1 == b.zenz)
					cout << 1;
				else
					cout << 0;
			} else
				cout << 0 << 0;
		}
		if (a.zenz == 4 || a.zenz == 6) {
			if (b.zenz == 4 || b.zenz == 6)
				cout << 1 << 1;
			else
				cout << 0 << 0;
		}
	} else
		cout << 0 << 0 << 0;
	return 0;
}
