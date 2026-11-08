#include<bits/stdc++.h>
using namespace std;
int a,c,p,q;
string b,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	p=(b[0]-'0')*10+(b[1]-'0');
	q=(d[0]-'0')*10+(d[1]-'0');
	if(a==c)
	{
		cout<<"1";
		if(p==q)
		{
			cout<<"1";
			if(b[2]<='C'&&d[2]<='C'||b[2]>'C'&&d[2]>'C')
			{
				cout<<"1";
				int k=abs(b[2]-d[2]),l=abs(p-q);
				if(k<=1&&l<=1) cout<<"1";
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	
	return 0;
} 
