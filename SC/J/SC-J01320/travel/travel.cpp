#include <bits/stdc++.h>
using namespace std;
string a, b, x, y;
string k = "0000";
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> x >> a >> y >> b;
	if (x == y){
		k[0] = '1';
		if ((a[0] == b[0]) && (a[1] == b[1])){
			k[1] ='1';
			if ((a[2] <= 'C' && b[2] <= 'C')||(a[2] > 'C' && b[2] > 'C')){
				k[2] = '1';
				if (((a[2] - b[2]) == 1) || ((b[2] - a[2]) == 1) || (a[2] == 'D' && b[2] == 'F')|| (a[2] == 'F' && b[2] == 'D'))
				k[3] = '1';
			}
		}
	}
	cout << k;
	return 0;
}