#include<algorithm>
#include<cstdio>
#include<iostream>
#define MXN 200005
using namespace std;
int ans,a[MXN],m,n,p,r,lens[35];
bool cmp(int x,int y){
	return x>y;
}
int len(int x){
	int r=1;
	while(x>>=1)r++;
	return r;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for(int i=1,j;i<=n;i++)j=len(a[i]),lens[j]++;
	for(int i=30;i;i--){
		if(lens[i]>=m){
			p=i;
			break;
		}
		else lens[i-1]+=lens[i];
	}
	for(int i=p;i>1;i--){
		r=(1<<i)-1;
		for(int j=1;j<=n;j++)a[j]&=r;
		sort(a+1,a+n+1,cmp);
		for(int j=1;j<=m;j++)r&=a[j];
		ans=max(ans,r);
	}
	cout<<ans;
	return 0;
}
