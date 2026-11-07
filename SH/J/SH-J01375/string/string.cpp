#include <bits/stdc++.h>

using namespace std;

int chuanshu,xiabiao,ans;
string a;
struct chuan
{
	int num;
	char thing;	
};

int main() 
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdin); 
	cin>>chuanshu;
	if(chuanshu==1)
	{
		cout<<"0";
		return 0;
	}
	chuan b[200005];
	for(int i=1;i<=chuanshu;i++)
	{
		cin>>b[i].num;
		cin>>b[i].thing;
	}
	for(int i=1;i<=chuanshu;i++)
	{
		for(int k=0;k<b[i].num;k++)
		{
			a[xiabiao]=b[i].thing;
			xiabiao++;
		}
	}
	if(a.size()%2==0)
	{
		for(int i=0;i<=a.size()/2-1;i++)
		{
			if(a[i]!=a[a.size()-1])
			{
				ans++;
			}
		}
		cout<<ans;
		return 0; 
	}
	else
	{
		for(int i=0;i<=a.size()/2-1;i++)
		{
			if(a[i]!=a[a.size()-1])
			{
				ans++;
			}
		}
		cout<<ans;
		return 0; 
	}
	return 0;
}
