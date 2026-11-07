#include<bits/stdc++.h>
using namespace std;
long long n,length,ans,kop,oij;
long long a[500005],b[500005],c[500005],d[500005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]),length+=a[i];
		char x;
		cin>>x;
		b[i]=int(x-'a');
	}
	long long jd=(length+1)/2;
	for(int i=1;i<=n;i++)
	{
//		cout<<i<<endl;
		kop+=a[i];
		if(kop>=jd)
		{
//			cout<<"enter change"<<endl;
			oij=i;
			long long kol=jd-kop+a[i];
			if(length%2)
			{
//				cout<<"enter first"<<endl;
				for(int j=1;j<=n-oij;j++)c[j]=a[n-j+1],d[j]=b[n-j+1];
				c[n-oij+1]=a[i]-kol;
				d[n-oij+1]=b[i];
				a[i]=kol-1;
			}
			else
			{
				for(int j=1;j<=n-oij;j++)c[j]=a[n-j+1],d[j]=b[n-j+1];
				c[n-oij+1]=a[i]-kol;
				d[n-oij+1]=b[i];
				a[i]=kol;
			}
			break;
		}
	}
//	cout<<"ansing......"<<endl;
	long long rp=1;
	for(int i=1;i<=oij;i++)
	{
		while(a[i]>=c[rp]&&rp<=n-oij+1)
		{
			if(b[i]!=d[rp])ans+=c[rp];
			a[i]-=c[rp];
			rp++;
		}
		if(b[i]!=d[rp])ans+=a[i];
		c[rp]-=a[i];
	 } 
	 printf("%lld",ans);
	return 0;
}
