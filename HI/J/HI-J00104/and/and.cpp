#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],maxx=0;
void fun(int u,long long c,int l,int d){
	if(u==n+1){
		if(d==m){
			maxx=max(maxx,c);
		}
		
		return ;
	}
	if(d<m){
		if(l==0){
			fun(u+1,a[u],1,d+1);
		}else{
			fun(u+1,c&a[u],l,d+1);
		}
	}
	fun(u+1,c,l,d);
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	fun(1,0,0,0);
	cout<<maxx;
	return 0;
}

