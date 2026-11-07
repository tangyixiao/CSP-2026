#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[200020],cnt;
char c[200020];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		cin>>c[i];
		while(a[i]--){
			s+=c[i];
		}
	}
	ll len=s.size();
	for(ll i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}