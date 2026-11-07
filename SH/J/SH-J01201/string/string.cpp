#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],cc,ans,ccc,f = 1;
char c[200005];
string s = "";
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for (int i = 1;i <= n;i++){
		cin>>a[i]>>c[i];
		c[0] = c[1];
		cc += a[i];
		if (c[i] != c[i - 1]){
			f = 0;
		}
	}
	if (f){
		cout<<0;
		return 0;
	}
	ccc = cc;
	cc *= n;
	if (cc <= 200000000){
		for (int i = 1;i <= n;i++){
			for (int j = 1;j <= a[i];j++){
				s += c[i];
			}
		}
		for (int i = 0;i < s.size() / 2;i++){
			if (s[i] != s[s.size() - 1 - i]){
				ans++;
			}
		}
		cout<<ans;
	}
	else {
		cout<<ccc / 2;
	}
	return 0;
}
