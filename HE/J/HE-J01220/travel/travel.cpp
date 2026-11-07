#include<bits/stdc++.h>
#define int long long
using namespace std;
string a,b,c,d;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>a>>b>>c>>d;
	if(a==c)//车厢号 
	{
		cout<<"1";
		if(b[0]==d[0]&&b[1]==d[1])//同一排 
		{
			cout<<"1";
			if((b[2]<='C'&&b[2]>='A'&&d[2]>='A'&&d[2]<='C')||b[2]>='D'&&b[2]<='F'&&d[2]>='D'&&d[2]<='F')//过道同一侧 
			{
				cout<<"1";
				char s=b[2],m=d[2];
				if(abs(s-m)==1)//座位相邻 
				{
					cout<<"1"; 
				} 
				else
				cout<<"0";
			}
			else
			cout<<"00";
		}
		else
		cout<<"000";
	}
	else
	cout<<"0000"; 
	return 0;
}
