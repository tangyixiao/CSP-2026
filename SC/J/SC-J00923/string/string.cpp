#include <bits/stdc++.h>
using namespace std;
long long int a[200005];
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n,s=0;
    cin>>n;
    int i=1,j=n;
    for(int k=1;k<=n;k++) cin>>a[k]>>c[k];
    while(i<j)
    {
    	if(c[i]!=c[j]) 
		{
			if(a[i]>a[j]) s+=a[j];
			if(a[i]<=a[j]) s+=a[i];
		
			if(a[i]>a[j]) 
			{
				a[i]-=a[j];
			    j--;
			    continue;
			}
			if(a[i]<a[j]) 
			{
				a[j]-=a[i];
				i++;
				continue;
			}
			if(a[i]==a[j]) 
			{
				i++;
				j--;
			}
		}
		else
		{
			if(a[i]>a[j]) 
			{
				a[i]-=a[j];
				j--;
				continue;
			}
			if(a[i]<a[j]) 
			{
				a[j]-=a[i];
				i++;
				continue;
			}
			if(a[i]==a[j]) 
			{
				i++;
				j--;
			}
		}
	}
	cout<<s;
	return 0;
}