#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	freopen(string.in,"r",stdin);
	freopen(string.out,"w",stdout);
	ll n,n2,ans=0;
	string s,s2;
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>n2>>s2;
		s.insert(s.end(),n2,s2[0]);
	}
	for(ll i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
/*
3
2 a
2 b
1 c
2
2 a
3 a
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

*/
