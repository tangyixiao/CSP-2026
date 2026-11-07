#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
const ll INF=1e18;



void solve(){
	ll n,m;
	cin>>n>>m;
	//ll flag[n];
	//vector<ll> f[n];
	vector<ll> v[31];
	vector<ll> s(31,0);
	bool flag=(n==m);ll ans=-1;
	for (ll i=1;i<=n;i++){
		ll num;
		cin>>num;
		if (flag){
			if (ans==-1)ans=num;
			else ans=ans&num; 
		}
		//flag[i]=num;
		ll sum=0,x=num;
		//cout<<num<<":\n";
		while (x){
			sum++;
			if (x&1){
				v[sum].push_back(num);
				//f[i].push_back(sum);
				s[sum]++;
			} 
			x>>=1;
		} 
		
	}if (flag){
		cout<<ans;
		return ;
	}
	
	ll  r=-1;
	//for (auto i:s) cout<<i<<" ";
	//cout<<"\n";
	for (ll i=30;i>=0;i--){
		if (s[i]>=m){
			r=i;
			break;
		}
	}//cout<<r<<" ";
	if (r==-1){
		cout<<0;
		return ;
	}
	ans=0;
	//vector<vector<ll>> dp(v[r].size(),vector<ll>(m,INF));
	for (ll i=1;i<=m;i++){
		/*
		ll num=v[r][i-1];
		for (ll j=min(m,i);j>=1;j--){
			ll nnn=num,mx=-1;
			for (ll k=1;k>i;k++){
				mx=max(mx,nnn&dp[k][j-1]);
			}dp[i][j]=max(mx,dp[i-1][j]);
		}*/
		if (ans==0){
			ans=v[r][i-1];
			continue;
		}ans=ans&v[r][i-1];
	}cout<<ans;
	return ;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	solve();
	return 0;
}
