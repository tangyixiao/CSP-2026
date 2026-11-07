#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],cnt[300005],f[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(f,0,sizeof(f));
		for(int j=i;j<=n;j++){
			if(f[a[j]]){
				for(int k=f[a[j]];k<=j;k++){
					f[a[k]]=0;
				}
				f[a[j]]=j;
			}
			else{
				f[a[j]]=j;
			}
		}
		for(int j=1;j<=m;j++){
			if(f[j]){
				cnt[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
