#include<bits/stdc++.h>
#define int long long 
using namespace std;
string c,s,cc,ss;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>c>>s>>cc>>ss;bool f=0;
	if(c==cc)cout<<1,f=1;
	else cout<<0,f=0;
	if(s[0]==ss[0]&&s[1]==ss[1]&&f)cout<<1;
	else cout<<0,f=0;
	int a=s[2]-'A',b=ss[2]-'A';
	if(((a<=2&&b<=2)||(a>=3&&b>=3))&&f)cout<<1;
	else cout<<0,f=0;
	if(f&&abs(a-b)==1)cout<<1;
	else cout<<0;
	return 0;
}
