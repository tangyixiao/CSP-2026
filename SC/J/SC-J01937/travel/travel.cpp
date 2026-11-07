#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){cout<<"0000\n";return 0;}
	int a=(s1[0]-'0')*10+s1[1]-'0',b=(s2[0]-'0')*10+s2[1]-'0';
	if(a!=b){cout<<"1000\n";return 0;}
	if((s1[2]<='C'&&s2[2]>='D')||(s2[2]<='C'&&s1[2]>='D')){cout<<"1100\n";return 0;}
	if(abs(s1[2]-s2[2])!=1){cout<<"1110\n";return 0;}
	cout<<"1111\n";
	return 0;
}