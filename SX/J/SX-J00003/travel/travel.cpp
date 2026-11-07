#include <bits/stdc++.h>
using namespace std;
int a1, a2, b1, b2,x;
char s1, s2;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>b1>>s1;
	cin>>a2>>b2>>s2;
	if (a1 == a2) {
		cout << 1;
		if (b1 == b2) {
			cout << 1;
			if ((s1 <= 'C' && s2 <= 'C')||(s1 > 'C' && s2 > 'C')) {
				cout << 1;
				if (((abs(s1-s2)==1)||(s1=='D'&&s2=='F')||(s1=='F'&&s2=='D'))&&!((s1=='D'&&s2=='C')||(s1=='C'&&s2=='D')))
					cout << 1;
				else
					cout << 0;
			} else
				cout << 0 << 0;
		} else
			cout << 0 <<0 << 0 ;
	} else {
		cout << 0<<0<<0<<0;
	}

	return 0;
}