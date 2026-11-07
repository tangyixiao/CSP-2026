#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,cnt;//"段数 每段长度"
string s;//"存放" 
char c;//"字符" 
bool check(string s,ll l,ll r){
	while(l<=r){
		if(s[l]!=s[r]){
			return false;
		}
		if(l==r||(r-l)==1){
			break;
		}
		l++;
		r--;
	}
	return true;
}//检查回文 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>cnt;
		cin>>c;
		for(ll j=1;j<=cnt;j++){
			s+=c;
		}
	}
	ll ans=0;
	ll len=s.size()-1;
	ll l=0;
	ll r=len;
	while(l<=r){
		if(check(s,l,r)){
			cout<<ans;
			return 0;
		}
		else if(s[l]==s[r]){
			l++;
			r--;
			continue;
		}
		else{
			ans++;
		}
		if(l==r||(r-l)==1){
			cout<<ans;
		}
		l++;
		r--;
	}
	return 0;
} 
