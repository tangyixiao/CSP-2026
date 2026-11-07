#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5;
ll n,m,ma,s[N],mx,ans=1073741823,f,ff,f1;
void dfs(ll a,ll b,ll c) {
	if(b==m) {
		ma=max(c,ma);
		return;
	}
	if(a==n)return;
	dfs(a+1,b+1,c&s[a+1]);
	dfs(a+1,b,c);
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(ll i=1; i<=n; i++) {
		cin>>s[i];
		mx=max(mx,s[i]);
		ans=ans&s[i];
		ll t=s[i];
		while(t!=0){
			if(t%2==0)f=1;
			t/=2;
		}
		if(s[i]!=i-1)ff=1;
		if(s[i]>4)f1=1;
	}
	if(n<=20) {
		dfs(1,1,s[1]);
		dfs(1,0,1073741823);
		cout<<ma;
	}else if(m==1){
		cout<<mx;
	}else if(m==n){
		cout<<ans;
	}else if(m==2){
		ll mm=0;
		for(ll i=1;i<=n;i++)for(ll j=i+1;j<=n;j++)mm=max(mm,s[i]&s[j]);
		cout<<mm;
	}else if(f==0||ff==0||f1==0){
		sort(s+1,s+n+1);
		cout<<s[n-m+1];
	}

}
