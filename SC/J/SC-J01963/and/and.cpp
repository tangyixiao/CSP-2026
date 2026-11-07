#include <bits/stdc++.h>
using namespace std;
int a[200001],zd=0;
int n,m;
void dx(int d,int j,int dis){
	if(d==m){
		zd=max(zd,j);
		return;
	}
	if(dis==n+1)return;
	int s=a[dis];
	int x=j&s;
	dx(d+1,x,dis+1);
	dx(d,j,dis+1);
} int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	dx(0,-1,1);
	cout<<zd;
	return 0;
}