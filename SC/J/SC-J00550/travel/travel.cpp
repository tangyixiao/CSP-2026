#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a=0,b=0,c=0,d=0,ans=0;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		a=1;
		if(s1[1]==s2[1]&&s1[2]==s2[2])
		{
			b=1;
			if(((s1[3]=='A'||s1[3]=='B')&&(s2[3]=='A'||s2[3]=='B'))||((s1[3]=='D'||s1[3]=='E'||s1[3]=='F')&&(s2[3]=='D'||s2[3]=='E'||s2[3]=='F')))
		    {
				c=1;
				if(s1[1]==s2[1]&&s1[2]==s2[2]&&(s1[3]+1==s2[3]||s2[3]+1==s1[3]))
				{
					if(s1[3]!='C'&&s2[3]!='D'||s2[3]!='C'&&s1[3]!='D')
					{
						d=1;
					}
				}
			}
		}
	}
	ans=1000*a+100*b+10*c+d;
	if(a==0&&b==0&&c==0&&d==0)
	{
		cout<<"0000";
		return 0;
	}
	cout<<ans;
	return 0;
}