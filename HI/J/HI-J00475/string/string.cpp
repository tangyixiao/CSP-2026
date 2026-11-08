#include<bits/stdc++.h>
using namespace std;
int a[2000000];
char ch[2000000];
string temp[20000000];
int ans=0;
string s,re1;
string re(string s2)
{
	string s3;
	for(int i=s2.size();i>-1;i--)
	{
	 	s3+=s2[i];
	}
	return s3;
}
int judge(int mid)
{
	for(int i=0;i<s.size();i++)
	{
		if(re1[i]==' ')
		{
			continue;
		}
		if(s[i]>=mid)
		{
			ans++;
			continue;
		}
		if(s[i]==re1[i])
		{
			ans++;
		}
	}
	return ans;
}
int main()
{
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdout);
	char mid;
	int n=0,ssize=0,half=0,ans2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>ch[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<a[i];j++)
		{
			s+=ch[i];
		}
	}
	re1=re(s);
	ssize=s.size();
	if(ssize%2==0)
	{
		half=ssize/2;
	}
	else
	{
		half=ssize/2;
		mid=s[half+1];
	}
	ans2=judge(mid);
	if(ans2>=half)
	{
		cout<<"0";
	}
	return 0;

}
