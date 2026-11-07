#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,ans;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		ans+='1';
		if(s1[0]==s2[0] && s1[1]==s2[1])
		{
			ans+='1';
			if(s1[2]>='A' && s1[2]<='C')
			{
				if(s2[2]>='A' && s2[2]<='C')
				{
					ans+='1';	
					int a0=s2[2]-s1[2];
					if(abs(a0)==1)
					{
						ans+='1';
					}	
					else
					{
						ans+='0';
					}	
				}	
				else
				{
					ans=ans+'0'+'0';
				}		
			}
			else if(s1[2]>='D' && s1[2]<='F')
			{
				if(s2[2]>='D' && s2[2]<='F')
				{
					ans+='1';	
					int a1=s2[2]-s1[2];
					if(abs(a1)==1)
					{
						ans+='1';
					}	
					else
					{
						ans+='0';
					}
				}	
				else
				{
					ans=ans+'0'+'0';
				}		
			}
		}
		else
		{
			ans=ans+'0'+'0'+'0';
		}
	}
	else
	{
		ans=ans+'0'+'0'+'0'+'0';
	}
	
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
