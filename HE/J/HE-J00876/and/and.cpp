#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
ll a[200200];
ll f(ll a,ll b){
	ll ans=0,i=1;
	if(b>a)swap(a,b);
	while(b){
		if(a%2&&b%2)ans+=i;
		i*=2;
		a/=2;b/=2;
	}
	return ans;
}
ll b[200200],num=1,an=-1;
void dfs(int idx){
	if(num==k){
		ll now=b[1];
		for(int i=2;i<=k;i++){
			now=f(now,b[i]);
		}
		an=max(an,now);
	}
	for(int i=idx;i<=n;i++){
		b[num++]=a[idx];
		dfs(idx+1);
		num--;
		dfs(idx+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	dfs(1);
	cout<<an;
	return 0;
}
