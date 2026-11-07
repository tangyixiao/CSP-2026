#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
	char type[2];
	long long cnt;
}NODE,*PNODE;
NODE arr[1000005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,i,j;
	long long ans=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%lld %s",&arr[i].cnt,arr[i].type);
	for(i=1,j=n;i<j;)
	{
		if(arr[i].cnt==0)
			i++;
		if(arr[j].cnt==0)
			j--;
		if(arr[i].type[0]==arr[j].type[0])
		{
			if(arr[i].cnt>=arr[j].cnt)
			{
				arr[i].cnt-=arr[j].cnt;
				arr[j].cnt=0;
			}
			if(arr[i].cnt<arr[j].cnt)
			{
				arr[j].cnt-=arr[i].cnt;
				arr[i].cnt=0;
			}
		}
		else
		{
			if(arr[i].cnt>=arr[j].cnt)
			{
				arr[i].cnt-=arr[j].cnt;
				ans+=arr[j].cnt;
				arr[j].cnt=0;
			}
			if(arr[i].cnt<arr[j].cnt)
			{
				arr[j].cnt-=arr[i].cnt;
				ans+=arr[i].cnt;
				arr[i].cnt=0;
			}
		}
	}
	printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
