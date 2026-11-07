#include<bits/stdc++.h>
using namespace std;
int a[500005],st[500005],top;
int ds_xb[300005],cnt[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		top=0;
		memset(ds_xb,0,sizeof(ds_xb));
		for(int j=i;j<=n;j++){
			if(ds_xb[a[j]]==0){
				ds_xb[a[j]]=++top;
				st[top]=a[j];
			}
			else{
				int otop=top;
				top=ds_xb[a[j]]-1;
				
				for(int k=ds_xb[a[j]];k<=otop;k++) ds_xb[st[k]]=0;
				ds_xb[a[j]]=++top;
				st[top]=a[j];
			}
		}
		for(int i=1;i<=top;i++) cnt[st[i]]++;
	}
	for(int i=1;i<m;i++) cout<<cnt[i]<<' ';
	cout<<cnt[m];
	return 0;
}
