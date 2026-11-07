#include<bits/stdc++.h>
#define int long long
#define rep(i,l,r) for(int i=l;i<=r;i++)
#define per(i,l,r) for(int i=l;i>=r;i--)
#define pb push_back
#define ull unsigned long long
using namespace std;
const int N=1e5+5;
string c,s,cc,ss;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>c>>s>>cc>>ss;
	bool ff=false;
	if(c==cc)cout<<1,ff=true;
	else cout<<0;
	bool flag=false;
	if(ff&&s[0]==ss[0]&&s[1]==ss[1])cout<<1,flag=true;
	else cout<<0;
	bool f=false;
	if(flag==true&&((s[2]<='C'&&ss[2]<='C')||(s[2]>='D'&&ss[2]>='D')))cout<<1,f=true;
	else cout<<0;
	if(f){
		int t=abs(s[2]-ss[2]);
		if(t==1)cout<<1;
		else cout<<0;
	}else cout<<0;
	return 0;
}
