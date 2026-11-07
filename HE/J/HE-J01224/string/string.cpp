#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int a[N],maxn=-1111111;
map<char,int> mp;
char ch[N];
int n,ans,l;
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>ch[i];
		mp[ch[i]]+=a[i];
		maxn=max(maxn,mp[ch[i]]);
		l+=a[i];
	}
	if(l%2==0) {
		cout<<l-maxn;
	} else {
		cout<<max(l-maxn-1,1ll-1ll);
	}
	return 0;
}
