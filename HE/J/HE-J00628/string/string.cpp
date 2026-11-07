#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen ("string.in","r",stdin);
	freopen ("string.out","w",stdout);
	long long  n,a,c=0;
	char b;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		for(long long  i=0;i<a;i++)
		{
			s+=b;
		}
	}
	int l=0,r=s.size()-1;
	bool f=0;
	while(l<=r)
	{
		f=0;
		if(s[l]==s[r])
		{
			f=1;
		}
		else
		{
			break;
		}
		l++;
		r--;
	}
	if(f==1)
	{
		cout<<c;
		return 0;
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
}
