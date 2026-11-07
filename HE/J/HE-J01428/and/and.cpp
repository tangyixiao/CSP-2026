#include<bits/stdc++.h> 
#include<iostream> 
#include<cstdio> 
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int k = 0;
	int maxn = 0;
	for(int i = 1;i<=n;i++){
		cin>>k;
		maxn = max(maxn,k);
	}
	cout<<maxn;
	return 0;
}
