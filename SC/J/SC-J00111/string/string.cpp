#include<bits/stdc++.h>
using namespace std;
int m[200005];
long long s,z,n; 
char a[200005];
bool b[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	z=n;
	long long h=0;
	for(int i=1;i<=n;i++) 
	{
		cin>>m[i]>>a[i];
		h+=m[i];
	}
	long long k=0;
	for(int i=1;i<=n;i++)
	{
		if(b[i]==false)
		{
			k+=m[i];
			b[i]=true;
		}
		if(k>=(h+1)/2)
		{
			s+=abs(h-k-k+m[i]);
			break;
		}
		if(m[i]<m[z]&&a[i]!=a[z])
		{
			m[z]-=m[i];
			s+=m[i];
			continue;
		}
		else if(m[i]<m[z]&&a[i]==a[z]) 
		{
			m[z]-=m[i];
			continue;
		}
		else if(m[i]>=m[z]&&a[i]!=a[z])
		{
			
			m[i]-=m[z];
			s+=m[z];
			i--;
			z--;
			continue;
		}
		else if(m[i]>=m[z]&&a[i]==a[z]) 
		{
			m[i]-=m[z];
		    i--;
		    z--;
		}
	}
	cout<<s<<" ";
	return 0;
}