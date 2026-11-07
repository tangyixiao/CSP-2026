#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	printf("%d",a[n+1-m]);
	return 0;
}/*
·第0步，下载考生手册，并仔细阅读。 [下载]（拜托，一定要仔细阅读）
·第1步，下载试题包，并解压缩。 [下载]
·第2步，用密码解密试题册。 试题册密码：Trick||Treat!
·第3步，编程解答每道题目，并将源代码提交到系统。
·第4步，查看已经提交的源代码，确认已经正确提交。
·注意：程序中输入输出部分请严格按照试题册要求编写。
*/