#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define fi first
#define se second
using namespace std;
const int maxn=2e5+10;
int n;
struct node{
	int a;
	char c;
}s[maxn];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>s[i].a>>s[i].c;
	int l=1,r=n,ans=0;
	while(l<r){
		int res=min(s[l].a,s[r].a);
		if(s[l].c!=s[r].c) ans+=res;
		s[l].a-=res; s[r].a-=res;
		if(!s[l].a) l++;
		if(!s[r].a) r--;
	}
	cout<<ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/