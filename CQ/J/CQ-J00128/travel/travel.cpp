#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char x1[2],x2[2],y1[3],y2[3];
	cin>>x1[0]>>x1[1]>>y1[0]>>y1[1]>>y1[2]>>x2[0]>>x2[1]>>y2[0]>>y2[1]>>y2[2];
	if(x1[0]==x2[0]&&x1[1]==x2[1])
	{
		cout<<'1';
		if(y1[0]==y2[0]&&y1[1]==y2[1])
		{
			cout<<1;
			if((y1[2]<='C'&&y2[2]<='C')||(y1[2]>='D'&&y2[2]>='D'))
			{
				cout<<1;
				if(abs(y1[2]-y2[2])==1)
				{
					cout<<1;
				}
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
}
