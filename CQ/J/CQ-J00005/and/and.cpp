#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ans=0,a[200001];
bool vis[200001]; 
map<int,int>mp;
bool cmp(int a,int b){
	return a>b;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=30;j++){
			if((1<<j)&a[i]) mp[j]++;
		}
	}
	sort(a+1,a+1+n,cmp);
	for(int i=30;i>=0;i--){
		if(mp[i]<m) continue;//筛除一定不满足的情况。
		ans+=(1<<i);
		for(int j=1;j<=n;j++){
			if(!vis[j]&&!((1<<i)&a[j])){
				vis[j]=1;
				for(int k=0;k<=30;k++){
					if((1<<k)&a[j]) mp[k]--;
				}
			}
		}
	}
	cout<<ans<<"\n";
	
	return 0;
}
/*
4 2
3 15 12 12
5 3
31 3 1 15 7
*/
