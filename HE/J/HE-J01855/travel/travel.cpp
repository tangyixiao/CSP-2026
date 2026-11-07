#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	//cout<<c1<<s1<<c2<<s2;
	
	//ans1 同一车厢 
	if(c1==c2)
	{
		cout<<1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	//ans2 同一排 
	bool check2=1;
	for(int i=0;i<2;i++)
	{
		if(s1[i]!=s2[i])
			check2=0;
	}
	if(check2)
	{
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	//ans3同一侧
	if(s1[2]<='C'&&s2[2]<='C'||(s1[2]>='D'&&s2[2]>='D'))
	{
		cout<<1;
	}
	else
	{
		cout<<"00";
		return 0;
	}
	//ans4相邻
	if((s1[2]+1==s2[2]||s1[2]-1==s2[2]))
	{
		if(s2[2]<='C')
		{
			cout<<1;
		}	
		else
		{
			if((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='D'&&s2[2]=='F')) 
			{
				cout<<1;
			}
			else
			{
				cout<<0;
			}
		}
	} 
	else
	{
		cout<<0;
	}
	return 0;
}
