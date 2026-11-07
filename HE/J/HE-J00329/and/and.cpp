#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
const ll kkkk=1073741823;

ll n,m,a[N],ans,mx,aans=kkkk;

void dfs(ll now,ll res,ll lst){
	if(now>n||res<=0)return ;
	if(res==1)ans=max(ans,lst&a[now]);
	dfs(now+1,res-1,lst&a[now]);
	dfs(now+1,res,lst);
}

void solve(){
	dfs(1,m,1048575);
	cout<<ans<<endl;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	sort(a+1,a+n+1);
	if(n<=20){
		solve();
	}
	else if(n<=2000){
		if(m==1)cout<<a[n]<<endl;
		else if(m==n){
			for(int i=2;i<=n;i++){
				a[i]=(a[i]&a[i-1]);
			}
			cout<<a[n];
		}
		else if(m==2){
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					ans=max(ans,(a[i]&a[j]));
				}
			}
			cout<<ans<<endl;
		}
	}else if(n>2000){
		if(mx<4){
			ll sum1,sum2,sum3,sum0;
			for(int i=1;i<=n;i++){
				if(a[i]==3)sum3++;
				if(a[i]==2)sum2++;
				if(a[i]==1)sum1++;
				if(a[i]==0)sum0++;
			}
			if(m<=sum3)cout<<3<<endl;
			else if(m<=sum3+sum2)cout<<2<<endl;
			else if(m<=sum3+sum1)cout<<1<<endl;
			else cout<<0<<endl;
		}
		else{
			for(int i=n;n-i+1>=m;i--){
				ans=aans&a[i];
			}
			cout<<aans<<'\n';
		}
	}

	
	return 0;
}
