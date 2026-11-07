#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,m,a[N],mx=-1,v[N];
void dfs(long long sum,long long cnt,int f){
	if(cnt==m){
		mx=max(mx,sum);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!v[i]&&f==1){
			v[i]=1;
			dfs(a[i],cnt+1,0);
			v[i]=0;
		}
		else if(!v[i]){
			v[i]=1;
			dfs(sum&a[i],cnt+1,0);
			v[i]=0;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	dfs(a[1],0,1);
	
	cout<<mx;
	return 0;
}