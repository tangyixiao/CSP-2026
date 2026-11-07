#include <bits/stdc++.h>
using namespace std;
char a;
int rc, rz, rp, xc, xz, xp;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a;
	rc += (a - '0') * 10;
	cin >> a;
	rc += (a - '0');
	
	cin >> a;
	rz += (a - '0') * 10;
	cin >> a;
	rz += (a - '0');
	cin >> a;
	rp = (a - 'A');
	
	cin >> a;
	xc += (a - '0') * 10;
	cin >> a;
	xc += (a - '0');
	
	cin >> a;
	xz += (a - '0') * 10;
	cin >> a;
	xz += (a - '0');
	cin >> a;
	xp = (a - 'A');
	
	if(rc == xc){
		cout << 1;
		if(rz == xz){
			cout << 1;
			if((xp <= 2 && rp <= 2) || (xp > 2 && rp > 2)){
				cout << 1;
				if(rp - xp == 1 || rp - xp == -1)
					cout << 1;
				else
					cout << 0;
			}
			else
				cout << 0 << 0;
		}
		else
			cout << 0 << 0 << 0;
	}
	else
		cout << 0 << 0 << 0 << 0;
	return 0;
}