#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100100];
int cnt[100100];
int pre[100100];
int ans[100100];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(cnt,0,sizeof cnt);
		for(int j=i;j<=n;j++){
			for(int o=i;o<=j;o++){
				cnt[a[o]]++;
			}
			for(int k=i;k<j;k++){
				if(a[k]==a[j]){
					for(int u=k;u<=j;u++){
						cnt[a[u]]--;
					}
					break;
				}
			}
			cnt[a[j]]++;
		}
		for(int o=1;o<=m;o++){
			if(cnt[o]>=n-i){
				ans[o]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}