#include<bits/stdc++.h>
using namespace std;
int a[500005],cnt[300005];
int cx[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
		ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int t=1;t<=n;t++){
		memset(cx,-1,sizeof(cx));
		for(int i=t;i<=n;i++){
			if(cx[a[i]]==-1){
			cx[a[i]]=i;
			}
			else{
				for(int j=1;j<=m;j++){
					if(cx[j]<i){
						cx[j]=-1;
					}
				}
					cx[a[i]]=i;
			}
		}
		for(int i=1;i<=m;i++){
			if(cx[i]!=-1){
				cnt[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}
