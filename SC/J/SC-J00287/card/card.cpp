#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005],pos[300005],num[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=1;i<=n;++i){
		int tot=i;
		for(int j=i;j<=n;++j){
			if(pos[a[j]]==0) pos[a[j]]=tot,num[tot++]=a[j];
			else{
				for(int z=tot-1;z>pos[a[j]];--z) pos[num[z]]=0;
				tot=pos[a[j]]+1;
			}
		}
		//cout<<tot<<' ';
		for(int j=i;j<tot;j++){
			ans[num[j]]++;
			//cout<<num[j]<<' '<<ans[num[j]]<<endl;
		}
		//cout<<endl;
		for(int j=1;j<=m;++j) pos[j]=0;
	}
	for(int i=1;i<=m;++i) cout<<ans[i]<<' ';
	return 0;
}