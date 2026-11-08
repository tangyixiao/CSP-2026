#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n,a,idx=0,ans=0;
	char c;
	string s="";
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a >> c;
		while(a--)
		{
			s+=c;
		}
	}
	int len=s.length();
	if(len%2==1)
	{
		int l=(len-1)/2,r;
		r=l;
		for(int i=1;i<=(len-1)/2;i++)
		{
			l--;
			r++;
			if(s[l]!=s[r])ans++;
		}
	}
	else
	{
		int l=(len-1)/2,r;
		r=l+1;
		for(int i=1;i<=len/2;i++)
		{
			l--;
			r++;
			if(s[l]!=s[r])ans++;
		}
	}
	cout << ans;
	return 0;
}
