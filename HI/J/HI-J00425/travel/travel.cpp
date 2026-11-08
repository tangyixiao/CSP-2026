#include<bits/stdc++.h>
using namespace std;
string a, b, c, d;
long long sum, ans;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w", stdout);
	cin >> a >> b >> c >> d;
	for(int i=0;i<2;i++){
		if(a[i] == c[i]) {
			sum++;
		}
	}
	if(sum == 2) {
		cout << 1;
	} else {
		cout << 0;
	}
	for(int i=0;i<2;i++){
		if(b[i] == d[i]) {
			ans++;
		}
	}
	if(b != d and sum == 2) {
		if(ans == 2) {
			cout << 1;
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
	if(ans == 2 and sum == 2){
		if(b[2] == 'A' || b[2] == 'B' || b[2] == 'C' and d[2] == 'A' || d[2] == 'B' || d[2] == 'C') {
			cout << 1;
		} else if(b[2] == 'D' || b[2] == 'F' and d[2] == 'D' || d[2] == 'F'){
			cout << 1;
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
	if(b[2] == 'A' and d[2] == 'B' || b[2] == 'B' and d[2] == 'C' || b[2] == 'D' and d[2] == 'F'){
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
} 
