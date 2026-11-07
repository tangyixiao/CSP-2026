#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans,x;
bool vis[200005];
void f(int k,long long u){
	if(k==m+1){
		ans=max(ans,u);
		return ;
	}
	for(long long i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=true;
			f(k+1,u&a[i]);
			vis[i]=false;
		}
	}
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		x=max(x,a[i]);
	}
	if(m==n){
		for(long long i=1;i<=n;i++){
			if(i==1){
				ans=a[i];
			}
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==1){
		cout<<x;
		return 0;
	}
	f(1,x);
	cout<<ans;
	return 0;
}
