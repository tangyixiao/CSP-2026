#include<bits/stdc++.h> 
#define ll long long
#define endl '\n'
using namespace std;
string ss;
void jx(string &ss){
	int n;
	cin>>n;
	while(n--){
		ll a;
		char c;
		cin>>a>>c;
		while(a--) ss+=c; 
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	jx(ss);
	ll cnt=0;
	//cout<<ss;
	ll l=ss.size();
	for(ll i=0;i<l;i++){
		if(ss[i]!=ss[l-1-i]){
			cnt++;
		}
	}
	cout<<cnt/2;
	return 0;
}
