#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int s[200010];
int f[6010];
int g[6010];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,num=(ll)(1>>31)-1,mx=0;
	cin>>n>>m;
	for (int i=1;i<=n;i++) {
		cin>>s[i];
		num&=s[i];
		mx=max(mx,s[i]);
	}
	if (m==n) {
		cout<<num;
		return 0;
	}
	if (m==1) {
		cout<<mx;
		return 0;
	}
	if (m==2) {
		int ans=0;
		for (int i=1;i<n;i++) {
			for (int j=i+1;j<=n;j++) {
				ans=max(ans,s[i]&s[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if (n>=6000) {
		sort(s+1,s+n+1);
		cout<<s[n-m+1];
		return 0;
	}
	f[0]=(1>>31)-1;
	for (int i=1;i<=n;i++) {
		swap(f,g);
		for (int j=1;j<=m;j++) {
			f[j]=max(g[j],g[j-1]&s[i]);
		}
	}
	cout<<f[m];
	return 0;
}
