#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500010],f[500010];
vector<int>v[500010];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>=1;i--){
		if(v[a[i]].size()){
			for(int j=0;j<v[a[i]].size();j++)f[v[a[i]][j]]++;
			continue;
		}
		v[a[i]].push_back(a[i]);
		for(int j=0;j<v[a[i+1]].size();j++)v[a[i]].push_back(v[a[i+1]][j]);
		for(int j=0;j<v[a[i]].size();j++)f[v[a[i]][j]]++;
	}
	for(int i=1;i<m;i++)cout<<f[i]<<' ';
	cout<<f[m];
} 
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
