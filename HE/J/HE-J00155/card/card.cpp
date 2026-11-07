#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5+10;
int n,m,x[N],cnt[300005],last[300005];
signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>x[i];
		last[x[i]]=i;
	}
	for(int i=1; i<=n; i++) {
		int a=last[x[i]];
		cnt[x[a]]++;
		while(a<n) {
			a=last[x[a+1]];
			cnt[x[a]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
}
