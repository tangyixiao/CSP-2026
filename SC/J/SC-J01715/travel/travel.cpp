#include<bits/stdc++.h>
using namespace std;
string ca,sa,cb,sb;
int a[10];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>ca>>sa>>cb>>sb;
	if(ca==cb)
	{
		a[1]=1;
		if(sa[0]==sb[0]&&sa[1]==sb[1])
		{
			a[2]=1;
			if(sa[2]>='A'&&sa[2]<='C'&&sb[2]>='A'&&sb[2]<='C')
			{
				a[3]=1;
				if(sa[2]+1==sb[2]||sa[2]-1==sb[2])
				{
					a[4]=1;
				}
			}
			if((sa[2]=='F'&&sb[2]=='D')||(sa[2]=='D'&&sb[2]=='F'))
			{
				a[3]=1;
				a[4]=1;
			}
		}
		for(int i=1;i<=4;i++)
		{
			cout<<a[i];
		}
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}