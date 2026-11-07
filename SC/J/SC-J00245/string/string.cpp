#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int s[N],cfs[N];
char zf[N],cfzf[N];
signed main()//感谢CCF给大样例，不过怎么全是偶数，测不出bug
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%lld",&n);
	long long zh=0;
	for(int i=1;i<=n;i++)
	{
		int sl;
		char c;
		scanf("%lld %c",&sl,&c);
		s[i]=sl;
		zf[i]=c;
		zh+=sl;
	}
	long long gh=0;
	int cnt=0;
	int mid=(zh+1)/2;
	for(int i=1;i<=n;i++)
	{
		if(gh<mid and gh+s[i]>=mid)//长度为奇数的情况难以考虑，如果中间一段跨过这里，那很好，但如果这里被两个包含，就不对了。需要去掉右边那一个的最开始一位，或者mid变为(zh+1)/2
		{
			if(zh%2)
			{
				cfs[++cnt]=zh/2-gh;
				cfzf[cnt]=zf[i];
				cnt++;
				cfs[cnt]=s[i]-cfs[cnt-1]-1;
				cfzf[cnt]=zf[i];
			}
			else
			{
				cfs[++cnt]=mid-gh;
				cfzf[cnt]=zf[i];
				cnt++;
				cfs[cnt]=s[i]-cfs[cnt-1];
				cfzf[cnt]=zf[i];
			}
		}
		else
		{
			cfs[++cnt]=s[i];
			cfzf[cnt]=zf[i];
		}
		gh+=s[i];
	}
//	for(int i=1;i<=cnt;i++)
//	{
//		printf("%d个%c\n",cfs[i],cfzf[i]);
//	}
	int yxb=cnt,yzf=cfs[cnt];
	long long qzh=0,zans=0;
	for(int i=1;i<=cnt;i++)
	{
		if(qzh+cfs[i]<=zh/2)
		{
			int yqh=cfs[i];
			while(yzf<=yqh)
			{
				if(cfzf[yxb]!=cfzf[i])
				{
					zans+=yzf;//计算答案
				}
				yqh-=yzf;
				yxb--;
				yzf=cfs[yxb];
			}
			yzf-=yqh;
			if(cfzf[yxb]!=cfzf[i])zans+=yqh;
		}
		qzh+=s[i];
	}
	printf("%lld\n",zans);
	return 0;
}
/*
看着数据范围大，其实没啥难度
只要看对称的两个点是否为同一个值就行了
这个东西叫做动态开点权值线段树（不是）
这个东西叫做记录并枚举
有点麻烦，先想好思路
枚举左边每一段，记录右边的下标与剩余字符数，然后若左边一段和超过了一半，那么说明这一段是交界处，直接找到剩余的当成右边就可以了。
*/
/*
3
1 a
2 b
3 c

*/
//abbcccaaaa