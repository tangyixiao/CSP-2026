#include<bits/stdc++.h> 
using namespace std;
int a[1000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,s=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<m;i++){
		a[n-2-i]=(a[n-2-i]&a[n-1-i]);
	}
	cout<<a[n-m];
	
	return 0;}