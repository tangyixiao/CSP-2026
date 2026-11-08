#include<bits/stdc++.h>
using namespace std;
int ce[102],xl[10][10];
int main()
{
	//*
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//*/
	//*
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//*/
	ce[0]=1;ce[1]=1;ce[2]=1;ce[3]=0;ce[4]=0;
	memset(xl,0,sizeof xl);
	xl[0][1]=1;xl[1][2]=1;
	xl[1][0]=1;xl[2][1]=1;
	xl[3][4]=1;xl[4][3]=1;
	string a,b,c,d,zw1,zw2;
	cin>>a>>b>>c>>d;
	if(a!=c)
	{
		cout<<"0000";
		return 0;
	}
	cout<<1;
	zw1=b[0]+b[1];zw2=d[0]+d[1];
	if(zw1!=zw2)
	{
		cout<<"000";
		return 0;
	}
	cout<<1;
	if(ce[b[2]-'A']!=ce[d[2]-'A'])
	{
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(xl[b[2]-'A'][d[2]-'A']) cout<<1;
	else cout<<0;
	return 0;
}
/*
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
freeopen("travel.in","r",stdin);freeopen("travel.out","w",stdout);
*/
/*
me want shang mi huo xing wei da shang
awa awa
my hao is *******,i not want say

i love CCF
*/
