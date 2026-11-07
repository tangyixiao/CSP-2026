#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n,i=0; cin>>n;
	vector<char> s;
	while(n--){
		ll a; char b; cin>>a>>b;
		while(a--){
			s.push_back(b); i++;
		}
	}
	vector<char> s1(s.size());
	s1=s;
	reverse(s.begin(),s.end());
	if(s1==s){ 
		cout<<0; 
		return 0;
	}
	ll ans=0;
	for(ll i=0;i<s1.size()/2;i++){
		ll j=s1.size();
		if(s1[i]!=s1[j]){
			ans++;
		}
		j--;
	}
	cout<<ans;
	return 0;
}