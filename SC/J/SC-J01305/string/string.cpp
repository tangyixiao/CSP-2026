#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
long long c;
char b[27];
int n;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n; 
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		c=c+a[i];
	}
	cout<<c/2-1;
	return 0;
}