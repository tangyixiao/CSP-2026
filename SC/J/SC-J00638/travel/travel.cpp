#include<bits/stdc++.h>
using namespace std;
int a,b;
string c,d;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>a>>c>>b>>d;
	bool tr1=(a==b);
	if(tr1)cout<<1;
	else cout<<0;
	bool tr2=((c[1]==d[1]&&c[0]==d[0])&&tr1);
	if(tr2)cout<<1;
	else cout<<0;
	bool tr3=false;
	if('A'<=c[2]&&c[2]<='C'&&'A'<=d[2]&&d[2]<='C')tr3=true;
	if('D'<=c[2]&&c[2]<='F'&&'D'<=d[2]&&d[2]<='F')tr3=true;
	tr3=(tr3&&tr2);
	cout<<(tr3?1:0);
	bool tr4=false;
	if('A'<=c[2]&&c[2]<='C'&&'A'<=d[2]&&d[2]<='C'&&abs(c[2]-d[2])==1)tr4=true;
	if(c[2]=='D'&&d[2]=='F')tr4=true;
	if(c[2]=='F'&&d[2]=='D')tr4=true;
	tr4=(tr4&&tr3);
	cout<<(tr4?1:0);
	return 0;
}
/*
accepted 8:40 score:100 total score:100
*/