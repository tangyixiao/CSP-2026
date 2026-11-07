#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<char> s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	char c;
	ll ans=0,sm=0;
	cin>>n;
	for (int i = 1; i <= n; i++){
		cin>>a>>c;
		sm+=a;
		for (int j = 1; j <= a; j++){
			s.push_back(c);
		}
	}

	for (int i = 0; i < sm/2; i++){
		if (s[i]!=s[sm-1-i]) {
			
			ans++;
		}
	}
	cout<<ans<<'\n';
	return 0;
}
	

