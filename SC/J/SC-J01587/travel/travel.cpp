#include <bits/stdc++.h>
//#define int long long
using namespace std;
string a, b, c, d;
signed main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> a >> b >> c >> d;
	if(a != c){
		cout << "0000";
	}else{
		cout << "1";
		string e = b.substr(0, 2), f = d.substr(0, 2);
		if(e != f){
			cout << "000";
		}else{
			cout << 1;
			char cc = b[2], dd = d[2];
			if(cc > dd){
				swap(cc, dd);
			}
			if((dd == cc + 1 && cc != 'C') || (cc == 'D' && dd == 'F')){
				cout << "11";
			}else if(cc == 'A' && dd == 'C'){
				cout << "10";
			}else{
				cout << "00";
			}
		}
	}
	return 0;
}