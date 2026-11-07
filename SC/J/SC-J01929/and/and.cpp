#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],mx,sum;
void dfs(long long x,long long sum,long long q,long long &mx){
	if(x==0){
		mx=max(mx,sum);
		return ;
	}
	for(long long i=1;i<q;i++){
		if(q==n+1)sum=a[i];
		dfs(x-1,sum&a[i],i,mx);
	}
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];	
	dfs(m,0,n+1,mx);
	cout<<mx;
	return 0;
} 
