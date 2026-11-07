#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N],num;
bool vis[N],nvis[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		vis[i]=1;
	}
	for(int k=30;k>=0;k--){
		num=0;
		for(int i=1;i<=n;i++){
			if(!vis[i]) continue;
			if(a[i]&(1<<k)) nvis[i]=1,num++;
		}
		if(num>=m){
			ans+=(1<<k);
			for(int i=1;i<=n;i++) vis[i]=nvis[i];
		}
	}
	cout<<ans;
	return 0;
 } 
 //1 51 47 AC 期望100pts 最简单的T3 