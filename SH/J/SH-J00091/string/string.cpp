#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ll a[n+2];
	char c;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c;
		for(int j=0;j<a[i];j++){
			s+=c;
		}
	}
	ll l=0;
	ll r=s.length()-1;
	ll ans=0;
	while(l<=r){
		if(s[l]!=s[r])ans++;
		l++;
		r--;
	}
	cout<<ans;
}
