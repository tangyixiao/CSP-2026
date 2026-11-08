#include<bits/stdc++.h>
#define ll long long
using namespace std;

int a[500005],cnt[500005][300005];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int tmp=0;
		for(int j=1+i;j<=n;j++){
			cnt[i][a[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		int ans=0;
		for(int j=1+i;j<=n;j++){
			ans+=cnt[j][a[i]];
		}
		cout<<cnt[n-1][i]-ans<<' ';
	}
	return 0;
}
//>=48 
