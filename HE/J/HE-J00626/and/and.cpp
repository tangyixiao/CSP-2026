#include<bits/stdc++.h>
using namespace std;
int n,m,j;
int a[200002];
int f(int b,int maxn){
	if(b>m)return maxn|a[j];
	for(j=1;j<=n;j++){
		maxn=max(f(b+1,maxn|a[j]),maxn) ;
	}
	return maxn;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[n];
	cout<<f(1,0);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
