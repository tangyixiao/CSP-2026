#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m,x;
int a[N];
int vis[100];
int find( ){
	int ans=0,p=1;
	for(int i=0;i<=33;i++) ans+=vis[i]*p,p*=2;
	return ans;
}
int check( ){
	int k=find( );
	int num=0;
	for(int i=1;i<=n;i++){
		int p=a[i]&k;
		if(p>=k) num++;
	}
	return num;
}
signed main( ){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=33;i>=0;i--){
		vis[i]=1;
		if(check( )<m) vis[i]=0;
	}
	cout<<find( );
	return 0;
}
