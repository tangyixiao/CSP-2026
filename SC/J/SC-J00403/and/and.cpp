#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans=0;
bool vis[200005];
void f(long long t,int l,int d){
	if(l==m){
		ans=max(ans,t);
		return;
	}
	for(int i=d;i<=n;i++){
		if(!vis[i]){
			vis[i]=true;
			f(t&a[i],l+1,i);
			vis[i]=false;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		vis[i]=false;
	}
	f(1073741823,0,1);
	cout<<ans;
	return 0;
}