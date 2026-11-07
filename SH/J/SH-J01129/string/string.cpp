#include<bits/stdc++.h>
using namespace std;
int q1[200005];
char q2[200005];

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	scanf("%d", &n);
	if(n==1)
	{
		printf("0");
		return 0;
	}
	if(n==2)
	{
		int k1,k2;
		char c1,c2;
		
		scanf("%d %c", &k1,&c1);
		scanf("%d %c", &k2,&c2);
		if(c2==c1)
		{
			printf("0");
			return 0;
		}
		else
		{
			printf("%d", min(k1,k2));
			return 0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d %c", &q1[i], &q2[i]);
		q1[i]+=q1[i-1];
	}
	
	int N=q1[n],ans=0;
	for(int i=1;i<=N/2+1;i++)
	{
		int k1,k2;
		for(int j=1;j<=N/2+1;j++)
			if(q1[j-1]<=i&&q1[j]>i)
			{
				k1=j;
				break;
			}
		for(int j=1;j<=N/2;j++)
			if(q1[j-1]<=N-i+1&&q1[j]>N-i+1)
			{
				k2=j;
				break;
			}
		if(q2[k1]!=q2[k2])ans++;
	}
	
	printf("%d", ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
