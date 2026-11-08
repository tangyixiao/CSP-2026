#include<bits/stdc++.h>
using namespace std;
const int N=5e5+7,M=3e5+7;
int a[N];
int n,m;
int ans[N];
vector<int> v[N];
int lst[N];
int aft[N];
int bef[N];
bool f[N];
bool e[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
		if(v[a[i]].size()==0)lst[i]=-1;
		else lst[i]=v[a[i]][v[a[i]].size()-1];
		v[a[i]].push_back(i);
	}
	for(int begin=1;begin<=n;begin++){
		for(int i=begin;i<=n;i++){
			aft[i]=i+1;
			bef[i]=i-1;
		}
		memset(f,0,sizeof f);
		memset(e,0,sizeof e);
		for(int i=begin;i<=n;i++){
			if(lst[i]<begin)continue;
			if(f[lst[i]])continue;
			for(int j=lst[i];j!=i;j=aft[j]){
				f[j]=1;
			}
			aft[bef[lst[i]]]=i;
			bef[i]=bef[lst[i]];
		}
		for(int i=begin;i<=n;i++){
			if(f[i]==0)e[a[i]]=1;
		}
		for(int i=1;i<=m;i++){
			if(e[i]==1)ans[i]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
} 

