#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e5+7,M = 3e5+7;
ll a[M],b[N],c[N],cnt[M],k=0;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>c[i];
	}
	ll w;
	for(int i=1; i<=n*n; i++) {
		w = i-(i-1)/n*n;
		if(a[c[w]]==0) {
			b[++k] = c[w];
			a[c[w]] = i;
		}
		else {
			for(int j=a[c[w]]+1; j<=n&&b[j]!=0; j++) {
				a[b[j]] = 0,b[j] = 0;
			}
		}
		if(w==n) {
			for(int j=1; j<=m; j++) {
				if(a[j]!=0) {
					cnt[j]++;
				}
			}
		}
	}
	for(int i=1; i<=m; i++) {
		cout<<cnt[i]<<" "<<"\n";
	}
	return 0;
}
