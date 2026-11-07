#include<bits/stdc++.h>
using namespace std;
long long a[111111],s,f,g,e;
char c[111111];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>c[i];
	}
	g=n-1;
	while(f<=g)
	{
		if(c[f]!=c[g])
		{
			if(a[f]>=a[g])
			{
				s+=a[g];
			}
			else
			{
				s+=a[f];
			}
			if(a[f]>=a[g])
			{
				if(c[f]!=c[g-1])
				{
					s=s+a[f]-a[g];
					a[g-1]=a[g-1]-a[f]+a[g];
				}
			}
			else
			{
				if(c[g]!=c[f+1])
				{
					s=s+a[g]-a[f];
					a[f+1]=a[f+1]-a[g]+a[f];
				}
			}
		}
		else
		{
			if(a[f]>=a[g])
			{
				if(c[f]!=c[g-1])
				{
					s=s+a[f]-a[g];
					a[g-1]=a[g-1]-a[f]+a[g];
				}
			}
			else
			{
				if(c[g]!=c[f+1])
				{
					s=s+a[g]-a[f];
					a[f+1]=a[f+1]-a[g]+a[f];
				}
			}
		}
		f++;
		g--;
	}
	cout<<s;
	return 0;
} 
