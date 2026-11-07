#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5,X=12e6+5;//防备爆炸，两倍空间总够了
int zdscnt=1;
int zds[X][2],xs[X];
void cr(int a,int wz,int sw)
{
	xs[wz]++;
	//printf("cr:%d,%d,%d:xs[%d]=%d\n",a,wz,sw,wz,xs[wz]);
	if(sw==0)return;
	if(!zds[wz][(a&sw?1:0)])
	{
		zds[wz][(a&sw?1:0)]=++zdscnt;
	}
	cr(a,zds[wz][(a&sw?1:0)],sw>>1);
}
int hb(int a,int b)
{
	if(a==0 or b==0)return a+b;
	xs[a]+=xs[b];
	zds[a][0]=hb(zds[a][0],zds[b][0]);
	zds[a][1]=hb(zds[a][1],zds[b][1]);
	return a;
}
int main()//感谢CCF给了大样例
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		int x;
		scanf("%d",&x);
		cr(x,1,1<<29);
	}
	int wz=1,ans=0;
	for(int i=1<<29;i;i>>=1)
	{
		//printf("wz=%d,zds[%d][%d]=%d,xs%d\n",wz,wz,1,zds[wz][1],xs[zds[wz][1]]);
		if(xs[zds[wz][1]]>=m)
		{
			ans+=i;
		}
		else
		{
			zds[wz][1]=hb(zds[wz][0],zds[wz][1]);
		}
		wz=zds[wz][1];
	}
	printf("%d\n",ans);
	return 0;
}
/*
枚举每一位，看他能否是1，经典贪心+二分
字典树上搜索即可。
不会要像某道题一样用桶存储吧！
不会吧！
应该不会，因为字典树再深，还是只有6e6个节点
考虑单次查询包含一定二进制位的数的个数
可以使用“字典树合并”！
这样可以做到正常复杂度，因为最后一定合并为没有了
若此位为1，那么正常向1前进一位，否则，先将0这一支合到1，这样单次复杂度不超过两者中较小的一个大小，总和为6e6
复杂度显然是一个log的，简单！
*/