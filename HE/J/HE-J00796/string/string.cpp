#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5; 
struct csp{
	int a;
	char c;
}s[N];
ll ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;cin>>n;
	for(int i=1;i<=n;i++)
		cin>>s[i].a>>s[i].c;
	int l=1,r=n;
	while(l<r){
		if(s[l].c==s[r].c){
			if(s[l].a>s[r].a){
				s[l].a-=s[r].a;
				--r;
			}
			else if(s[l].a==s[r].a)
				++l,--r;
			else {
				s[r].a-=s[l].a;
				++l;
			}
		}
		if(s[l].c!=s[r].c){
			if(s[l].a>s[r].a){
				s[l].a-=s[r].a;
				ans+=s[r].a;--r;
			}
			else if(s[l].a==s[r].a)
				ans+=s[r].a,++l,--r;
			else {
				s[r].a-=s[l].a;
				ans+=s[l].a;++l;
			}
		}
	}
	cout<<ans;
	return 0;
}
