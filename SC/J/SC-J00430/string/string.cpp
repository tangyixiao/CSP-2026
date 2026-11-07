#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
deque<pair<ll,char>> que;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(ll i=1;i<=n;i++){
		ll a;char b;
		cin>>a>>b;
		que.push_back({a,b});
	}
	ll ans=0;
	while(que.size()>1){
		pair<ll,char> a=que.front(),b=que.back();
		que.pop_back(),que.pop_front();
		if(a.second!=b.second){
			ans+=min(a.first,b.first);
		}
		if(a.first>b.first){
			que.push_front({a.first-b.first,a.second});
		}
		if(a.first<b.first){
			que.push_back({b.first-a.first,b.second});
		}
	}
	cout<<ans;
	return 0;
}