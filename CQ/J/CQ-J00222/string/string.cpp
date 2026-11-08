#include <bits/stdc++.h>
using namespace std;
long long b[200005];
int hw(string s)
{
	int n=s.size();
	int r=s.size()-1;
	long long cnt=0;
	for(int i=0;i<n/2;i++)
	{
		if(s[i]!=s[r])
		{
			cnt++;
		}
		r--;
	} 
	return cnt;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n; 
	string s="";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		char a;
		cin>>b[i-1]>>a;
		for(int j=1;j<=b[i-1];j++)
		{
			s+=a;
		}
	}
	cout<<hw(s);
	return 0;
}
