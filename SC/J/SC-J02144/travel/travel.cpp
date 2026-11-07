#include<bits/stdc++.h>
using namespace std;
string s1, c1, s2, c2, l1, l2;
char k1, k2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1==c2) {
		cout << 1;
		for (int i=0;i<2;i++) 
			l1+=s1[i],l2+=s2[i];
		if (l1==l2) {
			cout << 1;
			k1=s1[2],k2=s2[2];
			if ((('A'<=k1&&k1<='C')&&('A'<=k2&&k2<='C'))||((k1=='D'&&k2=='F')||(k1=='F'&&k2=='D'))) {
				cout << 1;
				if ((((k1-k2==1)||(k2-k1==1))&&(('A'<=k1&&k1<='C')&&('A'<=k2&&k2<='C')))||((k1=='D'&&k2=='F')||(k1=='F'&&k2=='D'))) {
					cout << 1;
				} else cout << 0;
			} else cout << "00";
		} else cout << "000";
	} else cout << "0000";
	return 0;
}