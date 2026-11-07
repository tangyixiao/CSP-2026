#include<bits/stdc++.h>
using namespace std; 
char c1[5],s1[5],c2[5],s2[5],b[8];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=0;i<4;i++) b[i]='0';
	cin>>c1>>s1>>c2>>s2;
	if((c1[0]==c2[0])&&(c1[1]==c2[1])) 
	{
		b[0]='1';
		if((s1[0]==s2[0])&&(s1[1]==s2[1]))
		{
			b[1]='1';
			if((s1[2]<'D'&&s2[2]<'D')||(s1[2]>='D'&&s2[2]>='D'))
			{
				b[2]='1';
				if((s1[2]+2==s2[2])||(s2[2]+2==s1[2]))
					b[3]='1';
			}
		} 
	}
	cout<<b;
	return 0;
}