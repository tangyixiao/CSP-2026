#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int sum=0,ans=0,cut=0;
	int a[10005]={};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		sum+=a[i];
		sum-=a[1];
		ans+=a[i];
		ans-=a[2];
		cut+=a[i];
		cut-=a[3];
	}
	cout<<sum<<" "<<ans+2<<" "<<cut+1;
	return 0;
}
