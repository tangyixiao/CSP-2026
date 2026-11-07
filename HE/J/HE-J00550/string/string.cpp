#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,x,len,ans;
string s;
char c;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> x >> c;
		for(int j=1;j<=x;j++){
			s+=c;
		}
		len+=x;
		
	}
	s=' '+s;
	for(int i=1;i<=len/2;i++){
		if(s[i]!=s[len-i+1]) ans++;
	}
	cout << ans;
	return 0;
}
