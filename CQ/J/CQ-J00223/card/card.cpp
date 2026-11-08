#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int N=5e5+10;
 
int n, m, a[N], nex[N];
int t[N];
int f[N];
int ans[N];

signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=n; i++) f[i]=1;
	for(int i=1; i<=n; i++)
	{
		if(t[a[i]]!=0) nex[ t[a[i]] ]=i;
		t[a[i]]=i;
	}
	for(int i=1; i<=n; i++)
	{
		if(nex[i]!=0) f[nex[i]]+=f[i];
		else ans[a[i]]=f[i], f[i+1]+=f[i];
	}
	for(int i=1; i<=m; i++) cout<<ans[i]<<" ";
	cout<<endl;
	
	//S
	
	return 0;
}
