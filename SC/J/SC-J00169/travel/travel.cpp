#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+10;
string s1,s2;
int c1,c2;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else cout<<0;
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1])cout<<1;
	else cout<<0;
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&((s1[2]<='C'&&s2[2]<='C')||s1[2]>'C'&&s2[2]>'C'))cout<<1;
	else cout<<0;
	if(s1[2]>s2[2])swap(s1[2],s2[2]);
	if(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&((s1[2]=='A'&&s2[2]=='B')||(s1[1]=='B'&&s2[2]=='C')||(s1[2]=='D'&&s2[2]=='E')))cout<<1;
	else cout<<0; 
	return 0;
}
