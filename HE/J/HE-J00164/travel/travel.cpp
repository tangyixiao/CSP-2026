#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool f1,f2,f3,f4;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		f1=true;
		string cp_s1,cp_s2;
		cp_s1+=s1[0];
		cp_s1+=s1[1];
		cp_s2+=s2[0];
		cp_s2+=s2[1];
		if(cp_s1==cp_s2)
		{
			f2=true;
			char c1=s1[2],c2=s2[2];
			if(c1>='A'&&c1<='C'&&c2>='A'&&c2<='C'||c1>='D'&&c1<='F'&&c2>='D'&&c2<='F')
			{
				f3=true;
				if(c1<c2)
				{
					char c3=c1;
					c1=c2;
					c2=c3;
				}	
				if(c1>='A'&&c1<='C'&&c2>='A'&&c2<='C'&&c1-c2==1||c1>='D'&&c1<='F'&&c2>='D'&&c2<='F'&&c1-c2==2)
				{
					f4=true;
				}
			}
		}
	}
	if(f1) cout<<1;
	else cout<<0;
	if(f2) cout<<1;
	else cout<<0;
	if(f3) cout<<1;
	else cout<<0;
	if(f4) cout<<1;
	else cout<<0;
	return 0;
}
