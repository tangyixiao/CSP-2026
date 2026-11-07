#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	string s;
	cin >> n;
	for(int i=1; i<=n; i++){
		int a;
		char c;
		cin >> a >> c;
		for(int j=1; j<=a; j++){
			s+=c; 
		} 
	}
	int l=s.size(), cnt=0;
	for(int i=0; i<(l+1)/2; i++){
		if(s[i]!=s[l-1-i]){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}