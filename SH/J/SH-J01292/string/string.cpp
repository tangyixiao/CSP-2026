#include<iostream>
#include<string> 
using namespace std;

int main()
{
	//freopen{'string','in',}
	//freopen{'string','ans',}
	
	
	
	//cin>>ai;
	//long long si=1;
	//for(long long i=1;i<=ai;i++)
	//{
	//	int bi;char x;
	//	cin>>bi>>x;
	//	for(int j=1;j<=bi;j++){s[si]=x;si++;}
	//}
	//for(long long i=1;i<=si/2;i++)
	//{
	//	ans+=(s[i]!=s[si-i+1]);}
	//cout<<ans;
	
	
	int n;cin>>n;long long ans=0,l=1,r;
	long long a;long long b[n+3];char c[n+3];
	b[0]=0;b[n+1]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a;cin>>c[i];
		b[i]=b[i-1]+a;
	}
	r=b[n];
	int disl,disr,il=1,ir=n;
	while (il<=ir)
	{

			disl=b[il]-l;
			disr=r-b[ir];
			
		if(disl<disr)
		{
			l+=disl;r-=disl;
			if(c[ir]!=c[il]) 
			{
				ans+=disl;
			}
			il++;
		}
		else if(disl>disr)
		{
			l+=disr;r-=disr;
			if(c[ir]!=c[il]) 
			{
				ans+=disr;
			}
			ir--;
		}
		else
		{
			l+=disl;r-=disr;
			if(c[ir]!=c[il]) 
			{
				ans+=disr;
			}
			il++;ir--;
		}
	}
	cout<<ans;
    return 0;
}
