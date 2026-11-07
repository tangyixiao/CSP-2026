#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
	}else
	{
		cout<<"0000";
		return 0;
	}
	
	string a_str = "";
	a_str += s1[0];
	a_str += s1[1];
	string b_str = "";
	b_str += s2[0];
	b_str += s2[1];
	if (a_str == b_str) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	
	char junior_r = s1[2];
	char junior_x = s2[2];
	if(((junior_x>='A' and junior_x<='C') and (junior_r>='A' and junior_r<='C')) or ((junior_x=='D' or junior_x=='F') and (junior_r=='D' or junior_r=='F')))
	{
		cout<<1;
	}else
	{
		cout<<"00";
		return 0;
	}
	
	if((junior_x>='A' and junior_x<='C') and (junior_r>='A' and junior_r<='C'))
	{
		if((junior_x=='A' and junior_r=='B') or (junior_x=='B' and junior_r=='A') or (junior_x=='B' and junior_r=='C') or (junior_x=='C' and junior_r=='B'))
		{
			cout<<1;
		}else
		{
			cout<<0;
			return 0;
		}
	}
	if((junior_x=='D' or junior_x=='F') and (junior_r=='D' or junior_r=='F'))
	{
		if((junior_x=='D' and junior_r=='F') or (junior_x=='F' and junior_r=='D'))
		{
			cout<<1;
		}else
		{
			cout<<0;
			return 0;
		}
	}
	return 0;
}
