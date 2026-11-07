#include <bits/stdc++.h>
//#define int long long
using namespace std;
int n,m,a[500005],b[500005],v[300005],f[300005],ans=0;
string s;
struct mc {
	int n1,n2;
} t[200005];
signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n; i++) {
		memset(v,0,sizeof(v));
		memset(b,0,sizeof(b));
		b[i]=1;
		for(int j=i; j<=n; j++) {
			int kk=v[a[j]];
			v[a[j]]=j;
			if(kk){
				b[kk]-=1;
				b[j]+=1;
				for(int k=kk; k<=j; k++) {
					v[k]=0;
				}
			} 
		}
		for(int j=i; j<=n; j++) {
			b[j]=b[j-1]+b[j];
			if(b[j]==1) {
				f[a[j]]++;
			}
		}
	}
	for(int i=1; i<=m; i++) {
		cout<<f[i]<<' ';
	}
}
/*
4 3
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 1
*/