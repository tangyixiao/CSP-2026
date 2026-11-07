#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool flag=0;
	if(c1==c2) cout<<1,flag=1;
	else cout<<0;
	if(flag&&s1.substr(0,2)==s2.substr(0,2)) cout<<1; //substr mei you wen ti ba
	else cout<<0,flag=0;
	if(flag&&((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')||(s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))) cout<<1,flag=1;
	else cout<<0,flag=0;
	if(flag&&(abs(s1[2]-s2[2])==1||s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D')) cout<<1,flag=1;
	else cout<<0,flag=0;
	return 0;
}
//hao xiang wan yuan shen
