#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
string str;
int main(){

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin>>n;
	ll lth = 0;
	for(int i=1;i<=n;++i){
		ll x;
		char alpha;
		cin>>x>>alpha;
		if(x*n>=1e8){
			cout<<0;
			return 0;
		}
		for(int j=1;j<=x;++j){
			str = str+alpha;
		}
	}
	if(str.length()==1){
		cout<<0;
		return 0; 
	}
	if(n%2==1){
		str.erase(str.length()/2,1);
	}
	str = '/'+str;
	ll sum = 0;
	for(int l=1;l<=str.length()/2;++l){
		ll r = str.length()-l;
		if(str[l]!=str[r]){
			++sum;
		}
	}
	cout<<sum;
	return 0;
}

