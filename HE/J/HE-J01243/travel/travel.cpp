#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
string sa,sb,sc,sd;
bool f1,f2,f3,f4;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>sa>>sb>>sc>>sd;
	f1=f2=f3=f4=false;
	if(sa==sc)
		f1=true;
	if(f1&&sb[0]==sd[0]&&sb[1]==sd[1])
		f2=true;
	if(f2&&(sb[2]=='A'&&sd[2]=='B'||sb[2]=='A'&&sd[2]=='C'||sb[2]=='B'&&sd[2]=='C'||sb[2]=='D'&&sd[2]=='F'||sb[2]=='B'&&sd[2]=='A'||sb[2]=='C'&&sd[2]=='A'||sb[2]=='C'&&sd[2]=='B'||sb[2]=='F'&&sd[2]=='D'))
		f3=true;
	if(f3&&(sb[2]=='A'&&sd[2]=='B'||sb[2]=='B'&&sd[2]=='C'||sb[2]=='D'&&sd[2]=='F'||sb[2]=='B'&&sd[2]=='A'||sb[2]=='C'&&sd[2]=='B'||sb[2]=='F'&&sd[2]=='D'))
		f4=true;
	cout<<f1<<f2<<f3<<f4<<endl;
	return 0;
}
