#include<bits/stdc++.h>
using namespace std;
#define int long long

string a, b;
int n, m;

signed main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> a >> m >> b;
	if(n == m){
		cout << 1;
		if(a[0] == b[0] && a[1] == b[1]){
			cout << 1;
			if((a[2] <= 'C' && b[2] <= 'C') || (a[2] >= 'D' && b[2] >= 'D')){
				cout << 1;
				if(a[2] == b[2] + 1 || a[2] == b[2] - 1){
					cout << 1;
				}
				else cout << 0;
			}
			else
				cout << "00";
		}
		else
			cout << "000";
	}
	else
		cout << "0000";
}
