#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[2],b[2];
string s;
signed main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=0; i<2; i++) {
		cin>>a[i]>>b[i];
		cin>>s[i];
	}
if(a[0]!=a[1])
{cout<<"0000";
return 0;}
else if(b[0]!=b[1])
{cout<<"1000";
return 0;}
else if(((s[0]=='F'||s[0]=='D')&&(s[1]=='A'||(s[1]=='B'||s[1]=='C')))||((s[1]=='F'||s[1]=='D')&&(s[0]=='A'||(s[0]=='B'||s[0]=='C'))))
{cout<<"1100";
return 0;}
else if(s[0]=='A'&&s[1]=='C'||s[1]=='A'&&s[0]=='C')
{cout<<"1110";
return 0;}
else cout<<"1111";
return 0;
}
