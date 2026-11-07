#include <bits/stdc++.h>
using namespace std;
const int MAXN=5e5+10;
int n,m;
int a[MAXN];
bool f[10];
int t[10];
int p[10];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=n; i++) {
		for(int j=0; j<=9; j++) f[j]=0,p[j]=0;
		for(int j=i; j<=n; j++) {
			if(f[a[j]]==0) {
				t[a[j]]++;
				f[a[j]]=1;
				p[a[j]]=j;
			} else {
				for(int k=p[a[j]]; k<j; k++) {
					t[a[k]]--,f[a[k]]=0;
					if(t[a[k]]<0) t[a[k]]=0;
				}
				t[a[j]]++;
				f[a[j]]=1;
				p[a[j]]=j;
			}

		}
	}
	for(int i=1; i<=m; i++) {
		cout<<t[i]<<" ";
	}
	return 0;
}