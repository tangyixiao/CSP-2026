#include<bits/stdc++.h>
using namespace std;
long long n,a[200005];
long long sum,num;
string s;
char c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c;
		for(int j=1;j<=a[i];j++)
		{
			s+=c;
		}
	}
	if(s.length()%2==0)
	{
		sum=s.length()/2;
	}
	else
	{
		sum=s.length()/2+1;
	}
	vector<char>b(sum);
	for(int i=0;i<sum;i++)
	{
		b[i]=s[i];
		if(i>=s.length()-i-1)
		{
			break;
		}
		if(b[i]!=s[s.length()-i-1])
		{
			num++;
		}
	}
	cout<<num;
	return 0;
}