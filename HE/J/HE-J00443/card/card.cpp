#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int cnt[300010];
int del[500010];
int mdel[500010];
int ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	cin>>n>>m;
	mdel[0]=INT_MAX;
	for(int i=1;i<=n;i++){
		mdel[i]=INT_MAX;
		cin>>a[i];
		if(cnt[a[i]]!=0){
			for(int j=cnt[a[i]];j<i;j++){
				del[j]=max(del[j],cnt[a[i]]);
				mdel[j]=min(mdel[j],cnt[a[i]]);
			}
		}cnt[a[i]]=i;
	}for(int i=1;i<=n;i++){
		if(del[i]==i)continue;
		if(del[i]==0){
			ans[a[i]]+=i;
			continue;
		}int pos=i;
		while(pos!=del[pos])pos=del[pos];
		ans[a[i]]+=i-pos;
		cout<<i<<' '<<pos<<endl;
	}for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}