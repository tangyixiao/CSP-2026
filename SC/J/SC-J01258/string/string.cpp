#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	ll n;
	cin>>n;
	ll cnt=0;
	string a="",b="";
	for(int i=1;i<=n;i++){
		int x;
		string y;
		cin>>x>>y;
		for(int i=1;i<=x;i++)
			a+=y;
	}
	int s=a.size();
	b=a;
	reverse(a.begin(),a.end());
	for(ll i=0;i<s/2;i++)
		if(a[i]!=b[i])
			cnt++;
	cout<<cnt;
	return 0;
}