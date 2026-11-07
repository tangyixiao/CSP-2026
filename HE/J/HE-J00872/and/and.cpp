#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n,m,ma=-1;
int a[N];
void f(int x,int ans,int y){
	if(x>n)
		return;
	if(y==m){
		ma=max(ans,ma);
		return;
	}
	for(int i=x+1;i<=n;i++){
		if(y==0)
			f(i,a[i],y+1);
		else
			f(i,ans&a[i],y+1);
		f(i,ans,y);
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	f(1,a[1],1);
	f(1,0,0);
	cout<< ma;
}
