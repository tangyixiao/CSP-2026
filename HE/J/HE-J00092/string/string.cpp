#include<bits/stdc++.h>
using namespace std;
const int N=2e5+50;
long long n,ans;
struct abc{
	long long a;
	char c;
}s[N];
inline void solve(){
	cin>>n;
	for(int i=1;i<=n;++i)cin>>s[i].a>>s[i].c;
	for(int i=1,j=n;i<=j;){
		if(s[i].c!=s[j].c)ans+=min(s[i].a,s[j].a);
		if(s[i].a<s[j].a)s[j].a-=s[i].a,s[i].a=0;
		else if(s[i].a>s[j].a)s[i].a-=s[j].a,s[j].a=0;
		else s[i].a=0,s[j].a=0;
		if(!s[i].a)++i;
		if(!s[j].a)--j;
	}
	cout<<ans;
	return;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	solve();
	
	return 0;
}
