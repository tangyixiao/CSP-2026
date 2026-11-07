#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=5e+5;
int n,m;
int a[N+10];
int hsh[N+10],vis[N+10];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(vis[a[i]])	vis[a[i]]++;
		vis[a[i]]=i;
	}

	
	for(int i=1;i<=m;i++){
		cout<<vis[i]-1<<" ";
	}

 	return 0;
}
