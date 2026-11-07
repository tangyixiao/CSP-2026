#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],cnt[300005];
int flag[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;++j){
			if(flag[a[j]]!=0){
				for(int k=flag[a[j]];k<=j;++k)flag[a[k]]=0;
			}
			flag[a[j]]=j;
		}
		for(int i=1;i<=m;++i){
			if(flag[i]!=0)cnt[i]++;
		}
		memset(flag,0,sizeof(flag));
	}
	for(int i=1;i<=m;++i)cout<<cnt[i]<<" ";
	return 0;
}