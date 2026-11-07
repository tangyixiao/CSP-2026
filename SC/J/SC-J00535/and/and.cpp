#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],ans=-1e18;
void dg(int sum,int s,int la){
	if(s==m){
		ans=max(ans,sum);
		return ;
	}
	for(int i=la+1;i<=n;i++){
		dg((sum&a[i]),s+1,i);
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=2000){
		for(int i=1;i<=n;i++){
			dg(a[i],1,i);
		}
		cout<<ans;
	}else{
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
	}
	return 0;
}