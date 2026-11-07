#include<bits/stdc++.h>
using namespace std;
long long sum[200004],arr[200004][2];
char s[2];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,i,j;
	long long id,t,s1,s2,ans=0;
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		scanf("%lld %s",&arr[i][0],s);
		arr[i][1]=s[0]-'a'+1;
		sum[i]=sum[i-1]+arr[i][0]; 
	}
	for(i=0,j=n;i<j;)
	{
		s1=sum[i];
		s2=sum[n]-sum[j-1];
		if(s1<=s2)
		{
			++i;
			if(arr[i][1]!=arr[j][1])
				ans+=min(arr[i][0],s2-s1);
		}
		else
		{
			--j;
			if(arr[i][1]!=arr[j][1])
				ans+=min(arr[j][0],s1-s2);
		}
	}
	printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}

