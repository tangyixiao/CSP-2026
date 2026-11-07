#include<iostream>
using namespace std;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		char m;
		cin>>a;
		cin>>m;
		for(int j=1;j<=a;j++)
		{
			s+=m;
		}
	}
	int l=0;
	int r=s.length()-1;
	while(l<=r)
	{
		if(s[l]!=s[r])
		{
			sum++;
		}
		l++;
		r--;
	}
	cout<<sum;
	return 0;
} 
