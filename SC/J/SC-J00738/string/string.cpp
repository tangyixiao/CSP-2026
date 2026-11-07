#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, q, t;
bool f;
string a, ch;
bool hw(string a){
	t = a.size();
	f = 1;
	for(int i = 0; i < t - 1; i++){
		if(a[i] != a[t - i - 1]) f = 0;
	}
	if(f == 1) return 1;
	else return 0;
}
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> q >> ch;
		for(int j = 1; j <= q; j++){
			a += ch;
		}
	}
	if(hw(a)) cout << 0;
	else{
		cout << 2;
	}
	return 0;
}