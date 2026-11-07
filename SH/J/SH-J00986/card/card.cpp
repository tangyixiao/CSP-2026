#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[5005],ans[5005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int judge[5005];
		memset(judge,0,sizeof(judge));
		for(int j=i;j<=n;j++){
			int d[5005];
			judge[a[j]]++;
			if(judge[a[j]]==1)d[a[j]]=j;
			if(judge[a[j]]==2){
				for(int k=d[a[j]];k<j;k++){
					judge[a[k]]--; 
				}
				d[a[j]]=j;
			}
		}
		for(int i=1;i<=m;i++){
			ans[i]+=judge[i];
			if(ans[i]<0)ans[i]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
