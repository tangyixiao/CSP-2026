#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e3+5;
int n,m;
int a[N],lst[N][N],vis[N],p[N];
int cnt[N],ans[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool sA=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i>1&&a[i]<a[i-1]) sA=0;
	}
	if(sA){
		for(int i=1;i<=m;i++){
			cout<<n<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=n+2;j++) cnt[j]=0,vis[j]=0;
		for(int j=0;j<=n+2;j++){
			for(int k=0;k<=n+2;k++){
				lst[j][k]=0;
			}
		}
		for(int j=i;j<=n;j++){
			if(lst[a[j]][p[a[j]]]!=0){
				for(int k=lst[a[j]][p[a[j]]];k<j;k++){
					if(!vis[k]){
						cnt[a[k]]--;
						vis[k]=1;
						lst[a[k]][p[a[k]]]=lst[a[k]][--p[a[k]]];
					}
					
				}
			}
			
			lst[a[j]][++p[a[j]]]=j,cnt[a[j]]++;
		}
		for(int j=1;j<=m;j++){
			if(cnt[j]>0){
				ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
