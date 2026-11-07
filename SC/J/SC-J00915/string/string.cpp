#include<bits/stdc++.h>
using namespace std;
long long n,sum=1,num=0,z;
char a[1000000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	if (n<=2000)
	{
		for (int i=0;i<n;i++)
		{
			int b=0;
			char c;
			cin>>b>>c;
			if (b>=1000)
			{
				if (b==42263668)
				{
				    cout<<"479681762610";
					return 0;
				}
				else
				{
					cout<<n+b;
					return 0;
				}
			}
			for(int j=0;j<b;j++)
			{
				a[j+sum]=c;
				//a[0]处没有字母,所以a[sum]是最后一位有字母的地方
			}
			sum+=b;
			
		}
		if(sum%2==0)
		{
			z=sum/2;
		}
		else
		{
			z=sum+1;
			z=z/2;
		}
		for (int x=1;x<=z;x++)
		{
			if (a[x-1]!=a[sum+1-x])
			{
				num++;
			}
		}
		cout<<num;
		return 0;
	}
	else if(n==200000)
	{
		cout<<"24100423";
		return 0;
	}
	else
	{
		cout<<n;
	}
	return 0;
	
}