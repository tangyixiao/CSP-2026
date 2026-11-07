#include<bits/stdc++.h>
using namespace std;
int s,zt,n,m,dq,a[500006],mn[500006],ans[300006];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		dq=0;
		for(int j=1;;j++){
			if(mn[j]==0) break;
			mn[j]=0;
		}
		for(int j=i;j<=n;j++){
			zt=0,s=0;
			dq+=1;
			mn[dq]=a[j];
			if(dq!=1) for(int l=dq-1;l>=1;l--) if(mn[dq]==mn[l]) s=l,zt=1;
			if(zt==1){
				for(int p=s+1;p<=dq;p++) mn[p]=0;
				dq=s;
			}
		}
		for(int j=1;j<=dq;j++) ans[mn[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}