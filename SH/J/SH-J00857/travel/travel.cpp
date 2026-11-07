#include <bits/stdc++.h>
using namespace std;
bool f1,f2,f3,f4;
string s1,s2,s3,s4;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3)
	{
		f1=1;
		if(s2[0]==s4[0]&&s2[1]==s4[1])
		{
			f2=1;
			if((s2[2]<='C'&&s4[2]<='C')||(s2[2]>='D'&&s4[2]>='D'))
			{
				f3=1;
				if(abs((int)(s2[2])-(int)(s4[2]))==1) f4=1;
				else f4=0;
			}
			else f3=f4=0;
		}
		else f2=f3=f4=0;
	}
	else f1=f2=f3=f4=0;
	cout<<f1<<f2<<f3<<f4;
	return 0;
}
