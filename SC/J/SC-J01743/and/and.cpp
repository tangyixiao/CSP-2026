#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=2e+5;
ll a[N+10];
int f,cnt;
int n,m;	

ll ans;
int dfs(int l,int r,int step,ll sum){
	if(step==m||cnt==3e8){
		ans=max(ans,sum);
		return ans;
		
	} 
	for(int i=l;i<=r;i++){
		cnt++;
		if(!f){
			f=1;
			dfs(i+1,r,step+1,a[i]);
			f=0;
		}	
		else	dfs(i+1,r,step+1,sum&a[i]);
	}
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)	cin>>a[i];
	
	dfs(1,n,0,0);
	
	cout<<ans;
	
	return 0;
}
