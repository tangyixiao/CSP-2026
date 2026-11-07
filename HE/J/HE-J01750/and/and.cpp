#include<bits/stdc++.h>
using namespace std;
int n,m,a[20010],dp[20010][20010],maxn;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==2)maxn=a[1]&a[2];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(m==1)maxn=max(maxn,a[i]);
		if(m==n){
			if(i==1)maxn=a[1];
			else maxn=maxn&a[i];
		}
		if(m==2&&i>=2){
			for(int j=1;j<i;j++){
				int x=a[i]&a[j];
				if(maxn<x)maxn=x;
			}
		}
	}
	cout<<maxn;
	return 0;
} 
