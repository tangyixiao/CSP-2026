#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll len,ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	vector<pair<ll,char> > v; 
	for(int i=1;i<=n;++i){
		char x;
		ll z;
		cin>>z>>x;
		v.push_back({z,x});
		len+=z;
	}
	ll l=0,r=n-1;
	while(l<=r){
		if(v[l].first>=v[r].first){
			if(v[l].second==v[r].second){
				v[l].first-=v[r].first;
				r--;
			}
			else{
				v[l].first-=v[r].first;
				ans+=v[r].first;
				r--;
			}
		}
		else{
			if(v[l].second==v[r].second){
				v[r].first-=v[l].first;
				l++;
			}
			else{
				v[r].first-=v[l].first;
				ans+=v[l].first;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}

