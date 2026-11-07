#include<bits/stdc++.h>
using namespace std;
int n,x,num=0,k=1,sum,mum,ans=0,top=1;
char a;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		cin>>a;
		num+=x;
		mum=k;
		while(k<mum+x)
		{
			s[k]=a;
			k++;
		}
	}
	//cout<<s;
	if(num%2==0)
	{
		sum=num/2;
		for(int i=sum;i>=1;i--)
		{
			if(s[i]!=s[i+top])
			{
				ans++;
			}
			top+=2;
		}
	}
	else{
		sum=num/2;
		top++;
		for(int i=sum;i>=1;i--)
		{
			if(s[i]!=s[i+top])
			{
				ans++;
			}
			top+=2;
		}
	}
	cout<<ans;
	return 0;
}