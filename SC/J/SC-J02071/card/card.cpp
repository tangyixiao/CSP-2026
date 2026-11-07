#include<bits/stdc++.h>
using namespace std;
int n,m,b;
int a[500005];
int ans[300005];
int cnt[300005];
int v[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	for(int i=1;i<=n;i++){
		memset(v,0,sizeof(v));
		b=0;
		for(int j=i;j<=n;j++){
			if(v[a[j]]==0){
				cnt[++b]=a[j];
				v[a[j]]=b;
			}else{
				for(int k=v[a[j]]+1;k<=b;k++){
					v[cnt[k]]=0;
				}
				b=v[a[j]];
			}
		}
		for(int j=1;j<=b;j++){
			ans[cnt[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}