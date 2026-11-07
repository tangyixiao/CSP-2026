#include<bits/stdc++.h>
using namespace std;
long long n,m,a[300000],b[300000],bj[300000],ans=0,w=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
		if(b[i]>ans)w=i;
		ans=max(ans,b[i]);
	}
	memset(bj,1,sizeof(bj));
	bj[w]=0;
	for(int i=2;i<=m;i++){
		memset(b,ans,sizeof(b));
		ans=0;
		for(int j=i;j<=n;j++){
			if(bj[j]==0)continue;
			b[j]&=a[j];
			if(b[j]>ans)w=j;
			ans=max(ans,b[j]);
		}
		bj[w]=0;
	}
	cout<<ans;
	return 0;
}
