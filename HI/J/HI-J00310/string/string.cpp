#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	string s="";int l=0;
	for(int i=1;i<=n;i++){
		int ai;string ci;cin>>ai>>ci;
		for(int j=1;j<=ai;j++){
			s=s+ci;
		}
		l+=ai;
	}
	int ans=0;
	for(int i=0;i<l;i++){
		if(s[i]!=s[l-i-1]) ans++;
	}
	cout<<ans/2;

    return 0;
}

