#include<bits/stdc++.h>
using namespace std;
int a[29999999];
int sb(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,i,k;
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,sb);
	k=a[1];
	for(i=2;i<=m;i++){
		k=k&a[i];
	}
	cout<<k;
	return 0;
}
