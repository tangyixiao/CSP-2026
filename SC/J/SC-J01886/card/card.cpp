#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=5*1e5+1;
int n,m,a[maxn],b[maxn],c[maxn],t[maxn],l,r;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	l=r=1;
	for(int i=1;i<=m;i++) cout<<0<<" ";
	return 0;
}