#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int m,n,a[201900],ans;
bool v[201900];
int dfs(int c,int num){
	if (c>=m){
		ans=max(ans,num);
		return 0;
	}
	else{
		for (int i=1;i<=n;i++){
			if (!v[i]){
				v[i]=true;
				dfs(c+1,num&a[i]);
				v[i]=false;
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		v[i]=true;
		dfs(1,a[i]);
		v[i]=false;
	}
	cout<<ans;
	return 0;
}