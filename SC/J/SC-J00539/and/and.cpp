#include<bits/stdc++.h>
using namespace std;
const int lsb=2e5+10;
int n,m;
int a[lsb],maxx=-1;
int bl(int b,int i){
	if(i==n)return b&a[i];
	for(int j=1;j<=m;j++){
		int sb=bl(a[j],i-1);
		if(sb>maxx)maxx=sb;
		cout<<sb<<"\n";
	}
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		bl(a[i],m);
	}
	cout<<maxx;
}