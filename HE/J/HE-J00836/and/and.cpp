#include<bits/stdc++.h>
using namespace std;
const long long maxn=2e5+10;
long long n,m,ans;
long long a[maxn];
long long andm(int x,int y){
	long long ans=0,pos=1;
	while(max(x,y)){
		if(x%2==1&&y%2==1)ans+=pos;
		x/=2,y/=2;
		pos*=2;
	}
	return ans;
}
bool cmp(long long x,long long y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	ans=a[1];
	for(long long i=2;i<=m;i++)ans=andm(ans,a[i]);
	cout<<ans;
	return 0;
}
/*freopenÈ¥×¢ÊÍ!!!!!!!!!!!*/
/*Õô£¡*/
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/
