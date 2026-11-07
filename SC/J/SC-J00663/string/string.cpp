#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=3e5+10;
int a[N];
char c[N];
long long d[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	long long len=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
		d[i]=d[i-1]+a[i];
	}
//	for(int i=1;i<=n;i++){
//		cout<<d[i]<<' ';
//	}
//	cout<<endl;
	int x=(len+1)/2,ans=0;
	if(len&1){
		for(int i=x-1,j=x+1;i>=1;i--,j++){
			int v=lower_bound(d+1,d+n+1,i)-d;
			int u=lower_bound(d+1,d+n+1,j)-d;
			if(u>n) u=n;
//			cout<<i<<' '<<v<<endl<<j<<' '<<u<<endl;//
//			cout<<c[v]<<' '<<c[u]<<endl;
			if(c[v]!=c[u]) ans++;
		}
	}else{
		for(int i=x,j=x+1;i>=1;i--,j++){
			int v=lower_bound(d+1,d+n+1,i)-d;
			int u=lower_bound(d+1,d+n+1,j)-d;
			if(u>n) u=n;
//			cout<<i<<' '<<v<<endl<<j<<' '<<u<<endl;//
//			cout<<c[v]<<' '<<c[u]<<endl;
			if(c[v]!=c[u]) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}