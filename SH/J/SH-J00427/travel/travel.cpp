#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, b;
	string c, d;
	cin >> a >> c >> b >> d;
	bool x = (c[0] == d[0] && c[1] == d[1]);
	bool y = ((c[2] <= 'C' && d[2] <= 'C') || (c[2] >= 'D' && d[2] >= 'D'));
	bool z = (c[2] + 1 == d[2] || d[2] + 1 == c[2] || (c[2] == 'D' && d[2] == 'F' || c[2] == 'F' || d[2] == 'D'));
	if (a == b){
		cout << 1;
	}else{
		cout << 0;
	}
	if (a == b && x){
		cout << 1;
	}else{
		cout << 0;
	}
	if (a == b && x && y){
		cout << 1;
	}else{
		cout << 0;
	}
	if (a == b && x && y && z){
		cout << 1;
	}else{
		cout << 0;
	}
	return 0;
}
