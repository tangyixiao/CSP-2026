#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long k=0,n,a;
	string c,s;
	cin>>n;
	while(n--)
	{
		cin>>a>>c;
		while(a--)
			s+=c;
	}
	for(long long i=0;i<=(s.length())/2-1;i++)
	{
		if(s[i]!=s[s.length()-1-i]) 
			k++;
	}
	cout<<k;
	return 0;
}
