#include<bits/stdc++.h>
using namespace std;
//int f[(int)2e5+10];//定义f[j]为选j个数的最大值那么枚举i=1~n,f[j]=max(f[j],f[j-1]&a[i])
//f[i][j]=max(f[i-1][j],f[i-1][j-1]&...)
int n,m;
int a[(int)2e5+10];
int res;
void dfs(int k,int pos,int rec){
	if(k==m){
		res=max(res,rec);
		return;
	}
	for(int i=pos;i<=n;i++){
		if(!k){
			dfs(1,i+1,a[i]);
		}else{
			dfs(k+1,i+1,rec&a[i]);
		} 
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("and.in","r",stdin);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	
	freopen("and.out","w",stdout);
	
	if(m==1){
		int maxv=-1;
		for(int i=1;i<=n;i++)maxv=max(maxv,a[i]);
		
		cout<<maxv;
	}else if(m==n){
		int ans=a[n];
		for(int i=n-1;i>0;i--)ans&=a[i];
		
		cout<<ans;
	}else if(m==2){
		int maxv=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxv=max(maxv,a[i]&a[j]);
			}
		}
		cout<<maxv;
	}else if(n<=20){
		dfs(0,1,0);
		cout<<res;
	}else{
		sort(a+1,a+n+1);
	
		int ans=a[n];
		for(int i=n-1;i>n-m;i--)ans&=a[i];
		
		
		cout<<ans;
	}
	
	return 0;
}
