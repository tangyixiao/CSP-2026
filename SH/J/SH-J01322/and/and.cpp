#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	string s[200010];
	bool vis[200010];
	string ans = "";
	cin >> n >> m;
	int mx = -2e9;
	for(int i = 1; i <= n; i++){
		int a;
		cin >> a;
		s[i] = "";
		while(a>=1){
			s[i] += a%2+'0';
			a/=2;
		}
		int sz = s[i].size();
		mx = max(mx,sz);
	}
	for(int i = 1; i <= n; i++){
		while(s[i].size()!=mx) s[i]+='0';
		reverse(s[i].begin(),s[i].end());
	}
	for(int i = 1; i <= 200005; i++) vis[i] = 1;
	for(int i = 0; i < mx; i++){
		int cnt = 0;
		for(int j = 1; j <= n; j++){
			if(vis[j]&&s[j][i]=='1') cnt++;
		}
		if(cnt<m){
			ans += '0';
			continue;
		}
		for(int j = 1; j <= n; j++){
			if(s[j][i]=='0') vis[j] = 0;
		}
		ans += '1';
	}
	int fnl = 0;
	for(int i = 0; i < mx; i++){
		if(ans[i]=='0') continue;
		int k = 1;
		int t = mx - i - 1;
		while(t--) k *= 2;
		fnl += k;
	}
	cout << fnl;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
