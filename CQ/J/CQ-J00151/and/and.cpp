#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int a[N];
int get(int x){
	int res=0,k=1;
	while(x>=k){
		res++;
		k*=2;
	}
	return res-1;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,mx=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	int mxw=get(mx),ans=0;
//	cout<<mxw<<" ";
	for(int i=mxw;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(((ans+(1<<i))&a[j])==(ans+(1<<i)))cnt++;
		}
		if(cnt>=m)ans+=(1<<i);
//		cout<<ans<<"\n";
	}
	cout<<ans;
	return 0;
}
/*
from:  PC_cats

Have goal to AK!!

2026/10/31 09:05
*/
