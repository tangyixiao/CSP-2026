#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,c,s=0,ans=0;
	string a,b;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> c >> a;
		s+=c;
		for(int i=1;i<=c;i++){
			b+=a;
		}
	}
	for(int i=0;i<=s/2;i++){  
		if(b[s-i-1]!=b[i]) ans++;
	}
	cout << ans;
	return 0;
} 