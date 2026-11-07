#include <bits/stdc++.h>
using namespace std;
struct node
{
	long long num;
	char c;
};
const int N=2e5+10;
node a[N],b[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].num>>a[i].c;
	int cnt=0;
	for(int i=1;i<=n;)
	{
		char re=a[i].c;
		long long rsum=0;
		while(re==a[i].c)
		{
			rsum+=a[i].num;
			i++;
		}
		b[++cnt]={rsum,re};
	}
	long long ans=0;
	for(int i=1,j=cnt;i<=j;)
	{
		if(b[i].c!=b[j].c)
		{
			if(b[i].num<b[j].num)
			{
				ans+=b[i].num;
				b[j].num-=b[i].num;
				i++;
			}
			else if(b[i].num>b[j].num)
			{
				ans+=b[j].num;
				b[i].num-=b[j].num;
				j--;
			}
			else
			{
				ans+=b[i].num;
				i++,j--;
			}
		}
		else
		{
			if(b[i].num<=b[j].num)
			{
				ans+=b[j].num-b[i].num;
				long long re=b[j].num-b[i].num;
				i++;
				while(re&&i<=j)
				{
					if(re>=b[j].num)
					{
						re-=b[i].num;
						b[i].num=0;
						i++;
					}
					else b[i].num-=re;
				}
				j--;
			}
			else
			{
				ans+=b[i].num-b[j].num;
				long long re=b[i].num-b[j].num;
				j--;
				while(re&&i<=j)
				{
					if(re>=b[j].num)
					{
						re-=b[j].num;
						b[j].num=0;
						j--;
					}
					else b[j].num-=re;
				}
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
