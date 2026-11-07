#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+50;
ll n,sum; 
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) {
		ll a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			s+=c;
		}
		sum+=a;
	} 
	ll mi=(sum+1)/2,ans=0;
	for(int i=0;i<mi;i++){
		if(s[i]!=s[i+mi]&&i+mi<sum)	ans++;
	}
	cout<<ans;
	return 0;
}
