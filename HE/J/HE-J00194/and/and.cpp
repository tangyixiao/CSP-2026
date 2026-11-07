#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
ll n,m,a[N],b[N],ans;
int f[N][50];
inline bool cmp(int x,int y) {
	return x>y;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1; i<=n; i++) {
		for(int j=30; j>=0; j--) {
			if(b[i]>=1LL*(1<<j)) {
				f[i][j+1]=1;
				b[i]-=(1<<j);
			}
		}
	}
	vector<int> p;
	for(int j=30; j>=0; j--) {
		int cnt=0;
		p.clear();
		for(int i=1; i<=n; i++) {
			if(f[i][j]) {
				cnt++;
				p.push_back(a[i]);
			}
		}
		if(cnt>=m) break;
	}
	sort(p.begin(),p.end(),cmp);
	for(int i=0; i<m; i++) {
		if(i==0) ans=p[i];
		else ans=(ans&p[i]);
	}
	cout<<ans;
	return 0;
}
