#include <bits/stdc++.h>
using namespace std;

const int N=2*1e5+10;
int n,m;
long long a[N];
long long ans=0;
bool flag=true;

void DFS(int i,int len,long long res)
{
	if(len==m) 
	{
		ans=max(ans,res);
		return;
	}
	for(int id=i+1;id<=n;id++)
	{
		DFS(id,len+1,res&a[id]);
	}
}

int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	{
	    cin>>a[i];
		if((1024*1024-1)&a[i]!=a[i]) flag=false;	
	}
	if(flag)
	{
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	
	DFS(1,0,1024*1024*1024-1);
	
	cout<<ans;
	
return 0;}
