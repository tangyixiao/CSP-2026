#include<bits/stdc++.h>
using namespace std;
const int maxn=2E5+10;
__int128 arr[maxn];
int n,m;
bool vis[maxn];
long long dfs(int t,int res,int p){
	if(t==0){
		return res;
	}else{
		long long maxs=INT_MIN;
		vis[p]=1;
		for(int i=1;i<=n;i++){
			if(!vis[i]){
				maxs=max(maxs,dfs(t-1,arr[i]&res,i));
			}
		}
		vis[p]=0;
		return maxs;
	}
}
int main(){
	FILE *fin,*fout;
	fin=fopen("and.in","r");
	fout=fopen("and.out","w");
	fscanf(fin,"%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		fscanf(fin,"%d",&arr[i]);
	}
	long long maxs=INT_MIN; 
	for(int i=1;i<=n;i++){
		maxs=max(maxs,dfs(m-1,arr[i],i));
	}
	fprintf(fout,"%lld",maxs);
	return 0;
}

