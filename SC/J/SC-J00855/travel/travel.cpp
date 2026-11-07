#include<bits/stdc++.h>
#define int long long
 
using namespace std;
signed main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	int a, b;
	string c, d;
	cin >> a >> c >> b >> d;
	
	if(a == b) cout << "1";
	else{
		cout << "0000";
		return 0;
	}
	
	int p1 = (c[0] - '0') * 10 + (c[1] - '0');
	int p2 = (d[0] - '0') * 10 + (d[1] - '0');
	if(p1 == p2) cout << "1";
	else{
		cout << "000";
		return 0;
	}
	
	int w1 = c[2] - 'A', w2 = d[2] - 'A';
	if(w1 <= 2 && w2 <= 2) cout << "1";
	else if(w1 > 2 && w2 > 2) cout << "1";
	else{
		cout << "00";
		return 0;
	}
	
	if(abs(w1 - w2) == 1) cout << "1";
	else cout << "0";
	
	return 0;
}