#include <bits/stdc++.h>
using namespace std;
int n,a[200005],b=0,d=0;
char c[200005];
string s;
int main()
{
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>c[i];
		for(int j=0;j<a[i];j++)
		{
			s[j+b]=c[i];
		}
		b+=a[i];
	}
	for(int i=0,j=b-1;i<=j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			s[j]=s[i];
			d++;
		}
    }
    cout<<d;
    return 0;
}
	
