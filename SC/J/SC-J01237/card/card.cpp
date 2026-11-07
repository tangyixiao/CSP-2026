#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int x[N],ans[N],f[N];
int main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;++i) {
		cin>>x[i];
		f[x[i]]++;
	}
	for(int i=1;i<=n;++i) {
		f[x[i-1]]--;
		for(int j=i;j<=n;) {
			ans[x[j]]++;
			int k=n;
			for(;k>=j;--k) if(x[k]==x[j]) break;
			j=k+1;
		}
	}
	for(int i=1;i<=m;++i) cout<<ans[i]<<' ';
}
/*
4 3
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 1
*/