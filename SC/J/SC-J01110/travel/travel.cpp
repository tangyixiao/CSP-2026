#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>c>>s>>cc>>ss;
	if(c==cc)
	{
		cout<<"1";
		bool qr=true;
		for(int i=0;i<2;i++)
		{
			if(s[i]!=ss[i])
			{
				qr=false;
				break;
			}
		}
		if(qr)
		{
			cout<<"1";
			if((s[2]<='C'&&ss[2]<='C')||(s[2]>'C'&&ss[2]>'C'))
			{
				cout<<"1";
				if((s[2]=='A'&&ss[2]=='C')||(s[2]=='C'&&ss[2]=='A'))
				{
					cout<<"0";
				}
				else
				{
					cout<<"1";
				}
			}
			else
			{
				cout<<"00";
			}
		}
		else
		{
			cout<<"000";
		}
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}