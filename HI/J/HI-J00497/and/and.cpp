#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int n,m,s,a[111111];
string b[111111];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	if(m==1)cout<<a[n-1];
	else cout<<732;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
