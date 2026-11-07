#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],pd[500005],cnt,to[300005],pos[300005],ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool flag=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		if(a[i]>a[i+1]) flag=1;
	}
	if(flag==1){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) to[a[j]]=0;
			cnt=0;
			for(int j=i;j<=n;j++){
				if(to[a[j]]==1){
					for(int k=pos[a[j]]+1;k<=cnt;k++) to[pd[k]]=0;
					cnt=pos[a[j]];
				}
				else{
					pd[++cnt]=a[j];
					to[a[j]]=1;
					pos[a[j]]=cnt;
				}
			}
			for(int j=1;j<=m;j++){
				ans[j]+=to[j];
			}
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	}
	else{
		for(int i=1;i<=n;i++){
			pos[a[i]]=i;
		}
		for(int i=1;i<=m;i++) cout<<pos[i]<<" ";
	}
	return 0;
}