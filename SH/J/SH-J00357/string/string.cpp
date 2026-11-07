#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005],inp[15];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld %s",&a[i],inp);
		c[i]=inp[0];
		sum+=a[i];
		a[i]+=a[i-1];
	}
	a[n+1]=a[n]+1000000005;
	long long ans=0;
	for(long long i=sum/2,j=(sum+3)/2;i>=1&&j<=sum;)
	{
		int posi=lower_bound(a+1,a+n+1,i)-a;
		long long itobk=i-a[posi-1];
		int posj=lower_bound(a+1,a+n+1,j)-a;
                long long jtobk=a[posj]-j+1;
//		printf("%lld %d %lld %lld %d %lld\n",i,posi,itobk,j,posj,jtobk);
		if(c[posi]!=c[posj])
			ans+=min(itobk,jtobk);
		i-=min(itobk,jtobk);
		j+=min(itobk,jtobk);
	}
	printf("%lld\n",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
