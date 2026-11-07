#include<bits/stdc++.h>
#define ll long long
#define up(i,a,b,c) for(ll i=a;i<=b;i+=c)
#define dn(i,a,b,c) for(ll i=a;i>=b;i-=c)

using namespace std;
ll n,m;
ll a[500005];
bool vis[500005];
ll ans[500005];
stack<ll> q;
inline void solve(ll x){
	up(i,1,m,1)vis[i]=0;
	while(!q.empty())q.pop();
	up(i,x,n,1){
		if(vis[a[i]]){
			while(1){
				if(q.top()==a[i]){
					break;
				}
				else{
					vis[q.top()]=0;
					q.pop();
				}		
			}
		}
		else{
			vis[a[i]]=1;
			q.push(a[i]);
		}
	}
	while(!q.empty()){
		ans[q.top()]++;
		q.pop();
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	up(i,1,n,1){
		cin>>a[i];
	}
	up(i,1,n,1){
		solve(i);
	}
	cout<<ans[1];
	up(i,2,m,1){
		cout<<" "<<ans[i];
	}
	return 0;
}
