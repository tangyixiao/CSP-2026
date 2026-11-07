#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5+5;
int a[N];
bool f[N][30], sel[N];
int mp[31];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for(int i=1; i<=n; ++i){
		cin >> a[i];
		int x=a[i];
		int cnt=0;
		while(x){
			mp[++cnt] += x%2;
			f[i][cnt] = x%2;
			x/=2;
		}
	}
	int num=0;
	for(int i=31; i>=1; --i){
		if(mp[i] >=m){
			for(int j=1; j<=n; ++j){
				if(f[j][i])sel[j]=1,num++;
			}
			break;
		}
	}
	for(int i=31; i>=1; --i){
		for(int j=1;j<=31; ++j)mp[j]=0;
		for(int j=1;j<=n; ++j)if(sel[j]){
			int cnt=0,x = a[j];
			while(x){
				mp[++cnt] += x%2;
				f[i][cnt] = x%2;
				x/=2;
			}
		}
//		for(int j=1; j<=31;++j)cout << mp[j] << ' ';
//		cout << '\n';
		if(mp[i] >=m){
			for(int j=1; j<=n; ++j){
				if(sel[j]&&!f[j][i])sel[j]=0,num--;
			}
		}
		if(num == m)break;
	}
	ll ans = (1<<30)-1;
	for(int i=1; i<=n; ++i)if(sel[i])ans = (ans & a[i]);
	cout << ans;
	return 0;
}