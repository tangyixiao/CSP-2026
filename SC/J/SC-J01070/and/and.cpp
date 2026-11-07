#include<bits/stdc++.h>
using namespace std;

int maxn=-1,m,n,a[200005];
void js(int d,int y,int s){
	if(d==0) maxn=max(y,maxn);
	else{
		for(int i=s+1;i<=n-d+1;i++) {
			js(d-1,y & a[i],i);
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n-m;i++) js(m-1,a[i],i);
	cout<<maxn;
	return 0;
}