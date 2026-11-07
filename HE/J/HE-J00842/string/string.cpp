#include<bits/stdc++.h>
using namespace std;
string s[100000];
int a[100000];
string c[100000];
int n,sum=0;
int main()
{
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
    {
    	cin>>a[i]>>c[i];
    	for(int j=1;j<=n;j++)
    	{
    		s[i]+=c[i];
		}
		if(s[i]==s[n-i])
		{
			return 0;
		}
		else
		{
			sum++;
		}
	}
	cout<<sum;
}
