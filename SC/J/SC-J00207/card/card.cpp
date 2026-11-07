#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+5;
map<ll,ll> ans;
ll arr[N];
ll n,m;
bool is;

void work(ll st){
	map<ll,ll> mp;
	stack<ll> sta;
	ll idx=st;
	while(idx<=n){
		if(mp[arr[idx]]>0){
//			cout<<mp[arr[idx]]<<' '<<arr[idx]<<'\n';
			ll res=0;
			while(res!=arr[idx]){
				res=sta.top();
				mp[res]--;
				sta.pop();
			}
		}
		sta.emplace(arr[idx]);
		mp[arr[idx]]++;
		idx++;
	}
	for(auto it:mp){
		if(it.second>0) ans[it.first]++;
	}
}

void solveI(){
	for(int i=1;i<=n;i++) work(i);
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
}

void solveII(){
	
	ll val=arr[1];
	for(int i=1;i<=n;i++){
		if(val!=arr[i+1]){
			cout<<i<<' ';
		}
		val=arr[i+1];
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		if(arr[i]<arr[i-1]) is=true;
	}
	if(is) solveI();
	else solveII();
	return 0;
}