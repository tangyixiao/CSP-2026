#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct node{
	ll num;
	char x;
};
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	vector<node> v(n+1);
	for(ll i=1;i<=n;i++){
		cin>>v[i].num>>v[i].x;
	}
	ll ans=0;
	ll i=1,j=n;
	while(i!=j&&i<=j){
		if(v[i].x!=v[j].x)ans+=min(v[i].num,v[j].num);
		if(v[i].num>v[j].num){
			v[i].num-=v[j].num;
			j--;
		}
		 else if(v[i].num<v[j].num){
			v[j].num-=v[i].num;
			i++;
		}
		else{
			i++;
			j--;
		}
	}
	cout<<ans<<'\n';
}
