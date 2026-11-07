#include<bits/stdc++.h>
using namespace std;
int n,m,ans[300005],a[500005],cnt[300005],p[300005];
bool f[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i;i--){
		if(!f[i])cnt[a[i]]++,f[i]=1;
		if(p[a[i]]){
			cnt[a[i]]++;
			f[p[a[i]]]=1;
			for(int j=i;j<p[a[i]];j++){
				if(f[j]){
					cnt[a[j]]--;
				}
				f[j]=0;
			}
		}
		p[a[i]]=i;
		for(int i=1;i<=m;i++)
			if(cnt[i])ans[i]++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
}
