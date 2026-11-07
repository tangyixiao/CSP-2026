#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
bool vis[200005];
long long maxv=0;
void check(long long v,int d){
	if(d==m){
		maxv=max(maxv,v);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			check(v&a[i],d+1);
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdout);
	freopen("and.out","w",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vis[i]=1;
		check(a[i],1);
		vis[i]=0;
	}
	cout<<maxv;
	return 0;
}
