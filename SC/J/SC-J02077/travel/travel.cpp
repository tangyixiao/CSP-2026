#include<bits/stdc++.h>
//#define int long long
using namespace std;
string s1,s2,c1,c2;
int cnt;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	int r_c=int(c1[0]-'0')*10+int(c1[1]-'0');
	int x_c=int(c2[0]-'0')*10+int(c2[1]-'0');
	int r_s=int(s1[0]-'0')*10+int(s1[1]-'0');
	int x_s=int(s2[0]-'0')*10+int(s2[1]-'0');
	if(r_c!=x_c)
	{
		cout<<"0000"<<'\n';
		return 0;
	}
	cout<<1;
	if(r_s!=x_s)
	{
		cout<<"000"<<'\n';
		return 0;
	}
	cout<<1;
	if(s1[2]=='C'||s1[2]=='B'||s1[2]=='A')cnt++;
	else cnt--;
	if(s2[2]=='C'||s2[2]=='B'||s2[2]=='A')cnt++;
	else cnt--;
	if(cnt==2||cnt==-2)
	{
		cout<<1;
		if(int(s1[2])-1==int(s2[2])||int(s1[2])+1==int(s2[2]))cout<<1;
		else cout<<0;
	}
	else cout<<"00";
	return 0;
}