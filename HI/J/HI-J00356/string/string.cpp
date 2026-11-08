#include <bits/stdc++.h>
using namespace std;
string s,b;
long long  a,sum;
int main()
{
	freopen("string.in","r",srdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		cin>>b;
		for(int j=1;j<=a;j++)
			s+=b;
	}
	long long d=s.size();
	for(int i=0;i<=(d-1)/2;i++)
	{
		if(s[i]!=s[d-i-1])
			sum++;
	}
	cout<<sum;
	return 0;
}


