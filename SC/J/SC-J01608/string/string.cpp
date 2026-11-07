#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,ans;
struct Node{
	int a;
	char c;
}s[N];
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1; i<=n; i++) cin>>s[i].a>>s[i].c;
	int l=1,r=n;
	while(l!=r) {
		if(s[l].a<s[r].a) {
			if(s[l].c!=s[r].c) ans+=s[l].a;
			s[r].a-=s[l].a,s[l].a=0,l++;
		} else {
			if(s[l].c!=s[r].c) ans+=s[r].a;
			s[l].a-=s[r].a,s[r].a=0,r--;
		}
	}
	cout<<ans;
	return 0;
} 