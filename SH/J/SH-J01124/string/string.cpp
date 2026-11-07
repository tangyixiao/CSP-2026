#include<bits/stdc++.h>
using namespace std;
unsigned long long n,a;
unsigned char s[10000000010],c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long cnt=-1;//cnt是s最高位 
	for(int i=0;i<n;i++)
	{
		cin>>a>>c;
		while(a!=0)
		{
			s[cnt+1]=c;
			a--;
			cnt++;
		}
	}
//	cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<endl; 
	long long ans=0;
	if(cnt==0)
	{
		cout<<0<<endl;
		return 0;
	}
	if(cnt==1)
	{
		if(s[0]==s[1])
		{
			cout<<0<<endl;
			return 0;
		}
		else
		{
			cout<<1<<endl;
			return 0;
		}
	}
	if(cnt%2==0)//奇数 
	{
		for(int i=0,j=cnt;i<cnt/2&&j>cnt/2;i++,j--)
		{
			if(s[i]!=s[j])
			{
				ans++;
			}
		}
		cout<<ans<<endl;
		return 0;
	}
	else//偶数 
	{
		for(int i=0,j=cnt;i<(cnt+1)/2&&j>(cnt-1)/2;i++,j--)
		{
			if(s[i]!=s[j])
			{
				ans++;
			}
		}
		cout<<ans<<endl;
		return 0;
	}
	return 0;
}

