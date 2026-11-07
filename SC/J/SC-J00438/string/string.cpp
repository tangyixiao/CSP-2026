#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ans=0;
string s;
struct mc {
	int n1;
	char n2;
} t[200005];
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>t[i].n1>>t[i].n2;
	}
	int l=1,r=n;
	while(l<r) {
		if(t[l].n2!=t[r].n2) {
			ans+=min(t[l].n1,t[r].n1);
		}
		if(t[l].n1>t[r].n1) {
			t[l].n1-=t[r].n1;
			r--;
		} else if(t[l].n1<t[r].n1) {
			t[r].n1-=t[l].n1;
			l++;
		}else{
			r--;
			l++;
		}
	}
	cout<<ans;
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