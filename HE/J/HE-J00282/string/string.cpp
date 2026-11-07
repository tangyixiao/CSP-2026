#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a,s=0;
char c;
string s1;
ll fun(string n){
	ll l=0,r=n.size()-1;
	while(l<=r){
		if(n[l]!=n[r]){
			s++;
		}
		l++;
		r--;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a>>c;
		for(ll i=1;i<=a;i++){
			s1+=c;
		}
	}
	fun(s1);
	cout<<s;
	return 0;
}
