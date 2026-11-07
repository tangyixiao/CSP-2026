#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll MAXN=200010;
ll n,cnt;
vector <char> str;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=0;i<n;i++){
		ll a;
		cin>>a;
		char c;
		cin>>c;
		for(ll j=0;j<a;j++){
			str.push_back(c);
		}
	}
	for(ll i=0;i<str.size()/2;i++){
		if(str[i]!=str[str.size()-i-1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
