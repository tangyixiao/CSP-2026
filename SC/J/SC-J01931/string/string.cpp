#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
char c[1000000];
char ch[1000000];
long long n,x,ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i]>>c[i];
    	for(int j=0;j<a[i];j++)
    	{ 
    		ch[x]=c[i];
    		x++;
		}
	}
	for(int i=0;i<x/2;i++)
	{
		int j=x-i-1;
		if(ch[i]!=ch[j])
		{
			ans++;
		}
	}
	cout<<ans;
}