#include<bits/stdc++.h>
using namespace std;
int n,m,ans[300006],a[500006],b[300006],c[500006],qz[500006];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--){
		c[i]=b[a[i]];
		b[a[i]]=i;
	}
	for(int i=1;i<=n;i++) qz[i]=1;
	for(int i=1;i<=n;i++){
		if(!c[i]) ans[a[i]]+=qz[i],qz[i+1]+=qz[i];
		else qz[c[i]]+=qz[i];
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	
	return 0;
}
