#include<bits/stdc++.h>
using namespace std;
int a[200005];
int n,m,zd;
void assa(int x,int an,int yx){
	if(yx>m){
		yx=0;
		zd=max(zd,an);
		return;
	}
	assa(x+1,an,yx+1);
	an=a[x]&a[x+1];
	assa(x,an,yx+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	assa(1,0,0);
	cout<<zd;
	return 0;
}