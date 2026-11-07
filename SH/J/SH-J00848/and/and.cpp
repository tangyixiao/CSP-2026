#include<bits/stdc++.h>
using namespace std;
const int N=200009;
typedef long long ll;
ll n,m,a[N],len,ans[N],res;
ll cal(ll x,ll y){
	return (x&y);
}
void dfs(ll k,ll num,ll val){
	if(num==m){
		res=max(res,val);
		return;
	}
	if(k==n+1){
		return;
	}
	dfs(k+1,num+1,cal(val,a[k]));
	dfs(k+1,num,val);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		dfs(1,0,1048576);
		cout<<res;
		return 0;
	}
	else if(m==1){
		cout<<*max_element(a+1,a+1+n);
		return 0;
	}
	else if(m==n){
		ll v=1048576;
		for(int i=1;i<=n;i++){
			v=cal(v,a[i]);
		}
		cout<<v;
		return 0;
	}
	else if(m==2){
		ll t=0;
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				t=max(t,cal(a[i],a[j]));
			}
		}
		cout<<t;
		return 0;
	}
	return 0;
}
