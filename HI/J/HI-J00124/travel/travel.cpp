#include<bits/stdc++.h>
using namespace std;
string c,s,c1,s1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>c1>>s1;
	for(int i=0;i<2;i++)
	{
		if(c[i]!=c1[i])
		{
			cout<<"0000";
			return 0;
		}
	}
	for(int i=0;i<2;i++)
	{
		if(s[i]!=s1[i])
		{
			cout<<"1000";
			return 0;
		}
	}  
	for(int i=2;i<=2;i++)
	{
		if(s[i]<='C'&&s1[i]<'C')
		{
			if(s[i]+1==s1[i]||s[i]-1==s1[i])
			{
				cout<<"1111";
				return 0;
			}
			cout<<"1110";
			return 0;
		}
		else if(s[i]>='D'&&s[i]>='D')
		{
			cout<<"1111";
			return 0; 
		}
		else
		{
			cout<<"1100";
			return 0; 
		}
	}
	return 0;
}
