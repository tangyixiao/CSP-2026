#include<bits/stdc++.h>
using namespace std;
bitset<200001>sz[31];
bitset<200001>now;
bitset<200001>nw;
long long n,m,a[200001],vis[30],st,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=30;j>=0;j--){
			if((a[i]>>j)&1){
				sz[j][i]=1;
				vis[j]++;
			}
		}
	}
	for(int i=30;i>=0;i--){
		if(vis[i]>=m){
			now=sz[i];
			st=i;
			ans+=(1<<i);
			break;
		}
	}
	for(int i=st-1;i>=0;i--){
		nw=now&sz[i];
		if(nw.count()>=m){
			ans+=(1<<i);
			now=now&sz[i];
		}
	}
	cout<<ans;
	return 0;
}