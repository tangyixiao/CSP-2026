#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	if(m==1){
		long long ans=a[1];
		for(int i=2;i<=n;i++)
			ans=max(ans,a[i]);
		printf("%lld\n",ans);
		return 0;
	}
	if(m==2){
		long long ans=-1;
		for(int i=1;i<n;i++)
			for(int j=i+1;j<=n;j++)
				ans=max(ans,a[i]&a[j]);
		printf("%lld\n",ans);
		return 0;
	}
	if(m==n){
		long long ans=1;
		for(int i=1;i<=n;i++)
			ans=ans&a[i];
		printf("%d\n",ans);
		return 0;
	}
	return 0;
}
