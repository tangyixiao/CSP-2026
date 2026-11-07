#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e7;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	ll n,len=0;
	ll num;
	char c;
	ll ans=0;
	string s[N];
	ll index=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin>>num>>c;
		len+=num;
		for(int j=0;j<n;j++){
			s[index]=c;
			index++;
		}
	}
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}

