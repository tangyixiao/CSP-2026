#include<bits/stdc++.h>
using namespace std;
const int maxn=2*1e5+10;
int n,m;
int a[maxn];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int zd=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	zd=a[1];
	for(int i=2;i<=m;i++){
		zd=zd and a[i];
	}
	cout<<zd;
	return 0;
}
