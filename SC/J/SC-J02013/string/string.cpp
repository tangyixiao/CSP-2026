#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
ll n,a[N],ans;
char c[N];
string st;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		int t=a[i];
		while(t--) st+=c[i];
	}
	if(n==1){
		cout<<"0";
		return 0;
	}
	if(n==2){
		if(c[1]!=c[2]){
			if(a[1]>a[2]) cout<<a[2];
			else cout<<a[1];
		}
		else cout<<"0";
		return 0;
	}
	ll k=n+1;
	if(st.size()%2==0){
		for(ll i=0;i<st.size();i++){
			k--;
			if(k==i+1) break;
			if(st[k]!=st[i]) ans++;
			else continue;
		}
	}
	else{
		for(ll i=0;i<st.size();i++){
			k--;
			if(k==i) break;
			if(st[k]!=st[i]) ans++;
			else continue;
		}
	}
	cout<<ans;
	return 0;
}