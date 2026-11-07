#include<bits/stdc++.h>
#define int long long
using namespace std;


signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else cout<<0;
	string ss1,ss2;
	ss1=s1[0]+s1[1];
	ss2=s2[0]+s2[1];
	if(c1==c2&&ss1==ss2)cout<<1;
	else cout<<0;
	if(c1==c2&&ss1==ss2&&((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')))cout<<1;
	else cout<<0;
	if(c1==c2&&ss1==ss2&&((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C'))&&(abs(s1[2]-s2[2])==1&&((s1[2]!='D'&&s2[2]!='C')||(s1[2]!='C'&&s2[2]!='D'))))
	{
		cout<<1;
	}
	else cout<<0;
	
	
	return 0;
}
