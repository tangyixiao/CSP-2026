#include <bits/stdc++.h>
using namespace std;
int a[100000]={};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int maxx=-1;
	int x=a[n-1];
	while(n-->0){
		for(int i=0;i<m;i++){
		x=x&a[n-i-2];
		maxx=max(maxx,x);
		}
		
	}
	cout<<maxx;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
