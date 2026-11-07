#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
int n,t,ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		int a;
		char b;
		cin >> a >> b;
		for(int i=1;i<=a;i++){
			s=s+b;
			t++;
		}
	}
	for(int i=0;i<t/2;i++){
		if(s[i]!=s[t-i]) ans++;
	}
	cout<<ans;
	return 0;
}