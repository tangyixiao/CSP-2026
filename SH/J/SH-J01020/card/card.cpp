#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[200005],id[200005];
bool cnt[200005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int last=0;
		for(int j=i;j<=n;j++){
			if(cnt[a[j]]==1){
				for(int k=id[a[j]];k<j;k++){
					cnt[a[k]]=0;
				}
			}
			cnt[a[j]]=1;
			id[a[j]]=j;
		}
		for(int j=1;j<=m;j++){
			if(cnt[j]==1) ans[j]++;
			cnt[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
