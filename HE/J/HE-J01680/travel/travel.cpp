#include <bits/stdc++.h>
using namespace std;

int m, n;
string a, b;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin >> m>> a>> n>>b;
	if(m == n){
		cout << 1;
		if(a[0]==b[0] && a[1]==b[1]){
			cout << 1;
			if(a[2]=='D' && b[2]=='E'){
				cout << 1 << 1;
				return 0;
			}
			else{
				if (a[2] == 'D' || a[2] == 'F' || b[2] == 'D' || b[2] == 'F') {
					cout << 0 << 0;
					return 0;
				}
				else if(a[2] + b[2] <= 'B' + 'C') {
					cout << 1;
					if(abs(a[2] - b[2]) == 1)
						cout << 1;
					else
						cout << 0;
				}
			}
		}
		else
			cout << 0 << 0 << 0;
	}
	else
		cout << 0 << 0 << 0 << 0;
	return 0;
}
