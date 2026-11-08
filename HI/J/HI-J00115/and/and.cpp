#include<bits/stdc++.h>
using namespace std;
int a[200005],n,m;
bool aa[200005];
int maxx=0;
void dfs(int t){
	if(t==m){
		int sum=2147483647;
		for(int i=0;i<n;i++){
			if(aa[i]){
				sum=(sum&a[i]);
			}
		}
		maxx=max(maxx,sum);
	}
	for(int i=0;i<n;i++){
		if(!aa[i]){
			aa[i]=1;
			dfs(t+1);
			aa[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dfs(0);
	cout<<maxx;
	return 0;
}
