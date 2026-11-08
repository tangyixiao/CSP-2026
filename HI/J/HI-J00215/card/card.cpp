#include <bits/stdc++.h>
using namespace std;
struct node {
	int l,r;
};
int a[500050];
int c[500050];
int b[300050];
int k[300050];
int r[500050];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,x;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>x;
		a[i]=x;
		c[i]=1;
	}
	for(int i=n; i>=1; i--) {
		int x=a[i];
		if(b[x]!=0) {
			r[i]=b[x];
		} else {
			b[x]=i;
		}
	}
	for(int i=1; i<=n; i++) {
		for(int j=i; j<=n; j++) {
			if(r[j]!=0) {
				c[j]--;
				c[r[j]]++;
				j=r[j];
			}
		}
	}
	for(int i=1; i<=n; i++) {
		c[i]+=c[i-1];
		k[a[i]]+=c[i];
	}
	for(int i=1; i<=m; i++) {
		cout<<k[i]<<' ';
	}
	return 0;
}
