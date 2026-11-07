#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m,andd[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>andd[i];
	}
	sort(andd+1,andd+n+1);
	cout<<andd[n-m+1];
	return 0;
}
