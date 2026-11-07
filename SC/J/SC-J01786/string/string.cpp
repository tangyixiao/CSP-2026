#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s="";
	scanf("string.in",n)
	for(int i=1;i<=n;i++)
	{
		int a;
		char b;
		scanf("string.in",a,b)
		for(int j=1;j<=b;j++)
		{
			s+=b;
		}
	}
	int num=0,q=s.size()/2;
	for(int i=0;i<=q;i++)
	{
		if(s[i]!=s[i+q]) num++;
	}
	printf("string.out",num)
	return 0;
}