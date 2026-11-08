#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 2e5+5;

int n, ans;
int a[N];
string c[N];
string s;

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i] >> c[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s += c[i];
		}
	}
	int l = 0, r = s.size()-1;
	while(l<r){
		if(s[l] != s[r]) ans++;
		l++;
		r--;
	}
	cout << ans;
	return 0;
}
