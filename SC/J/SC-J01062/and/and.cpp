#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
const int N=1e6;
long long m,n,mx=0;
long long a[N],j[N];
bool vis[N];
void dfs(long long pos,long long f){
	j[pos]=f;
	if(pos>n){
		long long o=j[1]&j[2]&j[3];
		mx=max(mx,o);
		return;
	}
	for(int i=1;i<=m;i++){
		if(!vis[i]){
			vis[i]=1;
			dfs(pos+1,a[i]);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);	
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	dfs(0,0);
	cout<<mx;
	return 0;
}
