#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,Ans="0000";
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		Ans[0]='1';
		if(s1[0]==s2[0] and s1[1]==s2[1])
		{
			Ans[1]='1';
			if((s1[2]<='C' and s1[2]>='A' and s2[2]<='C' and s2[2]>='A') or (s1[2]<='F' and s1[2]>='D' and s2[2]<='F' and s2[2]>='D'))
			{
				Ans[2]='1';
				if(abs(int(s1[2]-s2[2]))==1)
					Ans[3]='1';
			}
		}
	}
	cout<<Ans;
	return 0;
}
