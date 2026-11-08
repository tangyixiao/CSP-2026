#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
char d[N];
unsigned long long l[N];
unsigned long long ans=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	int n,a,i,j,k=1;
	
	char c;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a>>c;
		d[i]=c;
		if(d[i-1]==c)
			l[k-1]+=a;
		else
		{
			d[k]=c;
			l[k++]=a;
		}
	}
	if(k-1==1)
		cout<<0;
	else if(k-1==2)
	{
		cout<<min(l[1],l[2]);
	}
	else
	{
		for(i=1,j=k-1;i<=j;i++,j--)
		{
			if(l[i]==l[j])
			{
				if(d[i]!=d[j])
					ans+=l[j];
			}
			else
			{
				int tmp;
				if(l[i]>l[j])
				{
					tmp=l[i]-l[j];
					l[j-1]-=tmp;
				}
				else
				{
					tmp=l[j]-l[i];
					l[i+1]-=tmp;
				}
				if(d[i]!=d[j])
					ans+=max(l[j],l[i]);
				else
					ans+=tmp;
			}
		}
		cout<<ans;
	}
	return 0;
}
