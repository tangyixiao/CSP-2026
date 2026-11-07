#include<iostream>
using namespace std;
string c1,s1,c2,s2;
bool b1;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		b1=true;
		cout<<1; 
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	for(int i=0;i<s1.size()-1;i++)
	{
		if(s1[i]!=s2[i])
		{
			b1=false;
		}
	}
	if(!b1)
	{
		cout<<0<<0<<0;
		return 0;
	}else{
		cout<<1;
	}
	b1=false;
	for(char i='A';i<='C';i++)
	{
		for(char j='A';j<='C';j++)
		{
			if(s1[2]==i&&s2[2]==j)
			{
				b1=true;
				cout<<1;
				break;
			}
		}
		if(b1)
		{
			break;
		}
	}
	if(b1)
	{
		if(s1[2]<s2[2]&&s2[2]-s1[2]==1)
		{
			cout<<1;
			return 0;
		}else if(s1[2]>s2[2]&&s1[2]-s2[2]==1){
			cout<<1;
			return 0;
		}
		cout<<0;
		return 0;
	}else{
		cout<<0<<0;
		return 0;
	}
	if(s1[2]=='D'&&s2[2]=='F')
	{
		cout<<1<<1;
	}else if(s1[2]=='F'&&s2[2]=='D'){
		cout<<1<<1;
	}
	return 0;
}