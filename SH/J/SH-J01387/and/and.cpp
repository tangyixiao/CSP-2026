#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
long long k;
long long maxx;
void dfs(int x,int cnt,long long andd){
	if(cnt==m){
		maxx=max(andd,maxx);
		k++;
		return;
	}
	if(x==n-1){
		return;
	}
	for(int j=x+1;j<n;j++){
		dfs(j,cnt+1,andd&a[j]);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		dfs(i,1,a[i]);
	}
	cout<<maxx;
	return 0;
}
