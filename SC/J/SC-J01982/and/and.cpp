#include<bits/stdc++.h>
using namespace std;
long long n,a[200020],m,s=INT_MIN,ss,i;
void ad(long long _,long long x,long long h)
{
	if(h==m)
	{
		s=max(s,_);
		return ;
	}
	if(x==n)return ;
	if(x==0)
	{
		for(int y=x+1;y<=n;y++)
		{
			ad(a[y],y,h+1);
		}
	}
	else
	{
		for(int y=x+1;y<=n;y++)
		{
			long long p=a[y]&_;
			ad(p,y,h+1);
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i==1)ss=a[i];
		else ss=ss&&a[i];
	}
	if(m==n)
	{
		cout<<ss;
		return 0;
	}
	if(pow(n,m)>600000020)
	{
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
		return 0; 
	}
	ad(0,0,0);
	cout<<s;
}
/*
我现在是一个qz初二蒟蒻（洛谷号qwertyuiopasdfghjkzx被jc的qwq），主要在cw学oi。
我刚接触oi是在4年级，在一个叫做松迪编程的机构学习。
这里1节课2.5小时，有30分钟休息。
休息时我都在打PCL。
有一天，一个同学给我推荐了一个叫做florr的游戏，但我感觉很没意思，就没玩了。 
那的进度很慢，学了一年才准备接触函数。
所以在我5年级时，我就去了cw。
刚到cw时我认识了两个初一的（对，我比他们小2岁，我只记得其中一个洛谷是Love_song）。
我和他们关系很好，学了一学期，在期末欢乐赛时，我A3题直接carry他俩拿了个第三（也有可能是第二）。
但在第二年，我就有点跟不上了，在第二年我和一个洛谷号为zimozimo的人一起换到了另一个班。
我和zimozimo的关系比最开始和Love_song等人的关系都好。
在zimozimo转到cw的几周后，我认识了一个洛谷叫lyclyc686的人，他英文名叫Star。
在某个课间我看到了全M装的zimozimo在玩florr，感觉florr还挺有意思的，就会坑了。
在我入坑后Star经常帮我们刷号，在半年后的某一天，83级的zimozimo换到了6个Ucoin，他合炸了1个，让我帮他合一次。
我点击花瓣，做好准备后点击的craft，Ucoin转了一圈两圈……最后变成了一个Scoin……（过于激动不知道说啥）。
我看向了我的5Mcoin，我的小花也在他48级，只有10个不到的M时有了U。
后来，我上初中了 ……
没时间了，欲知后事如何，看我S组T1（考号:01854） 
*/