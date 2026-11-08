#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
char id1, id2;
int cnt1, cnt2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int sum1 = 0;
	for(int i = 0; i < c1.size(); i++) {
		sum1 = sum1 * 10 + c1[i] - '0';
	}
	int sum2 = 0;
	for(int i = 0; i < c2.size(); i++) {
		sum2 = sum2 * 10 + c2[i] - '0';
	}
	for(int i = 0; i < 2; i++) {
		cnt1 = cnt1 * 10 + s1[i] - '0';
	}
	for(int i = 0; i < 2; i++) {
		cnt2 = cnt2 * 10 + s2[i] - '0';
	}
	char id1 = s1[2];
	char id2 = s2[2];
	if(sum1 == sum2) {
		cout << 1;
		if(cnt1 == cnt2) {
			cout << 1;
			if((id1 <= 'C' && id2 <= 'C') || (id1 >= 'D' && id2 >= 'D')) {
				cout << 1;
				if(abs(int(id1 - id2)) == 1) {
					cout << 1;
				}
				else cout << "0";
			}
			else cout << "00";
		}
		else cout << "000";
	} else {
		cout << "0000";
	}

}
