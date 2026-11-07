#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node {
	ll a;
	string c;
} b[200001];
int main () {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n,l,r,s = 0;
	cin >> n;
	for(ll i = 1;i <= n;i++) cin >> b[i].a >> b[i].c;
	l = 1,r = n;
	while(l < r) {
		if(b[l].c != b[r].c) s += min(b[l].a,b[r].a);
		b[l].a -= min(b[l].a,b[r].a);
		b[r].a -= min(b[l].a,b[r].a);
		if(b[l].a <= 0) l++;
		if(b[r].a <= 0) r--;
	}
	cout << s;
	return 0;
}
