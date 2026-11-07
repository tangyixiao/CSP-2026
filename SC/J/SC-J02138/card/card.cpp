#include<bits/stdc++.h>
using namespace std;
int a[500005],cnt[300005],ans[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>=1;i--)if(cnt[a[i]]==0)cnt[a[i]]=i;
	int k=n;
	for(int i=n;i>=1;i--)if(cnt[a[i]]!=i){k=i+1;break;}
	for(int i=1;i<=n;i++){
		int j=i;
		while(j<k){
			if(j!=cnt[a[j]])j=cnt[a[j]];
			else j++;
		}for(int l=j;l<=n;l++)ans[a[l]]++;
	}for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}