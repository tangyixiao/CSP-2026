#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
namespace CSPJ{
	string a,b,c,d;
	bool check(){
		if(a!=c)return 0;
		if(b[1]!=d[1]||b[0]!=c[0])return 0;
		if(((b[2]=='D'||b[2]=='F')^(d[2]=='D'||d[2]=='F')))return 0;
		if(b[2]=='D')return 1;
		return abs(b[2]-d[2])==1;
	}
	void solve(){
		cin>>a>>b>>c>>d;
		cout<<(a==c)<<(a==c&&b[1]==d[1]&&b[0]==c[0])<<(a==c&&b[1]==d[1]&&b[0]==c[0]&&(!((b[2]=='D'||b[2]=='F')^(d[2]=='D'||d[2]=='F'))));
		cout<<check();
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int Q=1;
//	cin>>Q;
	while(Q--)CSPJ::solve();
//while(1);
	return 0;
}
/*
ÍòÊ¥½ÚÃÜÂë£ºTrick||Treat! 
s MB
s MB
*/

