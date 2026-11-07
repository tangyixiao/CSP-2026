#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],num[300005],maxn;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m; 
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		int id[300005]={},cnt=i,tmp[300005];
		for(int j=i;j<=n;j++)
		{
			if(id[a[j]]!=0)cnt=id[a[j]];
			tmp[cnt++]=a[j];
			id[a[j]]=cnt-1;
		}
		for(int j=1;j<=cnt;j++)
		{
			num[tmp[j]]++;
		}
	}
	for(int i=1;i<=maxn;i++)cout<<num[i]<<" ";
}
/*带我去你梦里的彼岸
 等着你的呼唤
 让这世界残忍的旋转
 听命运的呢喃
 时间一滴一滴落下
 开出一颗一颗烟花
 我用全部记忆写下
 你此刻的盛大 */ 
/*Staring at stars
Watching the moon
Hoping that one day they'll lead me to you
Why do the stars shine so bright in the sky
when most of the people are sleeping at night?
Why do we only have one chance to try?
Wish I could go back in time
Each time I fall asleep
I always see you in time mashine
never ends
so don't let me fall asleep */
/*可能要AFO了，估计这次考得也不是很好吧，再见*/ 
/*你说别追了，又依依不舍 
所以生命啊
他苦涩如歌*/ 
/*其实我还混数竞高联，我真的很想搞好他们两个的。最后筋疲力竭一事无成不上不下。*/ 
//我的执念万千千千 
//再见 
