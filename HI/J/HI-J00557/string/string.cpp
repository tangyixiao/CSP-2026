#include<bits/stdc++.h> 
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,x;
	char c;
	string s="";
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld%c",&a,&c);
		for(int j=1;j<=a;j++)s+=c;
	}
	string S=s;
	reverse(s.begin(),s.end());
	for(int i=0;i<s.size()/2;i++)
	{
		if(s[i]!=S[i])x++;
	}
	printf("%lld",x);//cout << x;
} 
//ºÃÄÑ£¨£»¡ä§Õ£à£©©g
