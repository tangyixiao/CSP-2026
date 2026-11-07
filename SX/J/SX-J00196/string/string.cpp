#include<bits/stdc++.h>//哎呦我去 ~
using namespace std;
long long n;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--)
	{
		long long x
		;string z
		;cin>>x>>z
		;while(x--)
		{
			s+=z;
		}
	}
	long long l=0,q=0;
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]!=s[l])
			q++;
		l++;
	}
	cout<<q/2;
}