#include<bits/stdc++.h>
using namespace std;
string s[200005];
long long a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	long long r=0,l=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i]>>s[i],r=r+a[i];
	long long g=0;
	int i=1,j=n; 
	while(l<r/2)
	{
		if(s[i]==s[j])
		{
			l=l+min(a[i],a[j]);
			if(a[i]<a[j])
			{
				a[j]=a[j]-a[i];
				i++;
			}
			else if(a[j]<a[i])
			{
				a[i]=a[i]-a[j];
				j--;
			}
			else
			{
				i++;
				j--;
			}
		}
		else
		{
			if(a[i]<a[j])
			{
				l=l+a[i];
				g=g+a[i];
				a[j]=a[j]-a[i];
				i++;
			}
			else if(a[j]<a[i])
			{
				l=l+a[j];
				g=g+a[j];
				a[i]=a[i]-a[j];
				j--;
			}
			else
			{
				l=l+a[i];
				g=g+a[i];
				i++;
				j--;
			}
		}
	} 
	cout<<g;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
3
2 a
2 b
1 c

2 
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
