#include<bits/stdc++.h>
using namespace std;
long long n;
long long ci;
char zi[200500];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string str="";
	for(int i=0;i<n;i++)
	{
		cin>>ci>>zi[i];
		for(int j=0;j<ci;j++)
		{
			str+=zi[i];
		}
	}
	bool flag=1;
	for(int i=0;i<n-1;i++)
	{
		if(zi[i]!=zi[i+1])
		{
			flag=0;
			break;
		}
	}
	if(flag)
	{
		cout<<0;
		return 0;
	}
	int cnt=0;
	int chang=str.size()-1;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]!=str[chang-i])
		{
			str[chang-i]=str[i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}