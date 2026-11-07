#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int ans[300030];
int l,r;
int aa[1000010];
map<int,int>mp;//id;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	l=1,r=0;
	for(int i=n;i>=1;i--){
		for(int j=i;j<=n;j++){
			if(mp[a[j]]==0){
				mp[a[j]]=++r;
				aa[r]=a[j];
			}else{
				for(;r>mp[a[j]];r--){
					mp[aa[r]]=0;
				}
			}
		}
		for(int j=l;j<=r;j++){
			ans[aa[j]]++;
		}
		l=1;
		r=0;
		mp.clear();
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}