#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string ans;
	if(c1==c2)
	{
	ans+='1';
	int tc1=(s1[0]-'0')*10+(s1[1]-'0');
	int tc2=(s2[0]-'0')*10+(s2[1]-'0');
	if(tc1==tc2)
	{
		ans+='1';
		if(s1[2]<='C'&&s2[2]<='C')
			
			{
				ans+='1';
				if(s1[2]+1==s2[2]||s1[2]-1==s2[2])
				{
					ans+='1';
				}
				else 
				{
					ans+='0';
					ans+='0';
					cout<<ans;
					return 0; 
				}
			}
		else if(s1[2]>'C'&&s2[2]>'C')
		
			{
				ans+='1';
				if(s1[2]-1!='C'&&s2[2]-1!='C')
				{
				ans+='1';
				}
				else 
				
				{
					ans+='0';
					ans+='0';
					cout<<ans;
					return 0;
				}
			}
		else
		{
			ans+='0';
			ans+='0';
			cout<<ans;
			return 0;
		}
		
		
	}
		else 
		{
			ans+='0';
			ans+='0';
			ans+='0';
			cout<<ans;
			return 0;
		}
	}
	else 
	{
		ans+='0';
		ans+='0';
		ans+='0';
		ans+='0';
		cout<<ans;
		return 0;
	}

	cout<<ans;
	return 0; 	
} 
