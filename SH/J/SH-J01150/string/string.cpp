#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
	long long a;
	char s;
}NODE,*PNODE;
NODE arr[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int i,j,n;
	long long ans=0;
	scanf("%d",&n);
	for(i=1;i<=n;++i)
		scanf("%lld %c",&arr[i].a,&arr[i].s);
	for(i=1,j=n;;)
	{
		if(i>=j)
			break;
		if(arr[i].s==arr[j].s)
		{
			if(arr[i].a==arr[j].a)
			{
				i++;
				j--;
				if(j<=i)
					break;
			}
			else if(arr[i].a>arr[j].a)
			{
				arr[i].a-=arr[j].a;
				j--;
			}
			else if(arr[i].a<arr[j].a)
			{
				arr[j].a-=arr[i].a;
				i++;
			}
		}
		else
		{
			if(arr[i].a==arr[j].a)
			{
				ans+=arr[i].a;
				i++;
				j--;
				if(j<=i)
					break;
			}
			else if(arr[i].a>arr[j].a)
			{
				while(arr[i].a>=arr[j].a)
				{
					if(i>=j)
						break;
					arr[i].a-=arr[j].a;
					if(arr[i].s!=arr[j].s)
						ans+=arr[j].a;
					j--;
				}
				if(i>=j)
					break;
				arr[j].a-=arr[i].a;
				if(arr[i].s!=arr[j].s)
					ans+=arr[i].a;
				i++;
			}
			else if(arr[i].a<arr[j].a)
			{
				while(arr[i].a<=arr[j].a)
				{
					if(i>=j)
						break;
					arr[j].a-=arr[i].a;
					if(arr[i].s!=arr[j].s)
						ans+=arr[i].a;
					i++;
				}
				if(i>=j)
					break;
				arr[i].a-=arr[j].a;
				if(arr[i].s!=arr[j].s)
					ans+=arr[j].a;
				j--;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}

