#include<bits/stdc++.h>
using namespace std;
#define int long long
int q[200005],p[200005];
int a[200005];
char c[200005];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,s=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		q[i]=q[i-1]+a[i];
		s+=a[i];
	}
	for(int i=n;i>=1;i--){
		p[i]=p[i+1]+a[i];
	}
	int x=1,y=n,xx=0,t=1;
	while(xx<s/2){
		int tx=max(t-t,q[x]-s/2),ty=max(t-t,p[y]-s/2);
		if((q[x]-tx)<(p[y]-ty)){
			ans+=(q[x]-tx-xx)*(c[x]!=c[y]);
			xx=q[x]-tx;
			x++;
		}
		else if((q[x]-tx)>(p[y]-ty)){
			ans+=(p[y]-ty-xx)*(c[x]!=c[y]);
			xx=p[y]-ty;
			y--;
		}
		else{
			ans+=(q[x]-tx-xx)*(c[x]!=c[y]);
			xx=q[x]-tx;
			x++;
			y--;
		}
	}
	cout<<ans;
	return 0;
}