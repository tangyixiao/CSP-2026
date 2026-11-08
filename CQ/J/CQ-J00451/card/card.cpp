#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,a[500005],r,t[500005],c[300005];
bool is[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		r=1;
		for(int j=i;j<=n;j++){
			for(int k=1;k<=r;k++)
				if(t[k]==a[j]){
					r=k;
					break;
				}
			t[r++]=a[j];
		}
		memset(is,0,sizeof(is));
		for(int j=1;j<r;j++)
			if(!is[t[j]]){
				is[t[j]]=1;
				c[t[j]]++;
			}
	}
	for(int i=1;i<=m;i++) cout<<c[i]<<' ';
}
/*
游记（寄）
密码是Trick||Treat! 
啥阴 
第四题应该是个啥阴，就拿来写邮寄吧。
我甚至用了1h才把t1，t2写完（昨天学的对拍真好用）
在此得感谢[mmy](luogu.com.cn/user/)
洛谷名mo_mo_yu0_0（应该是吧）
目前估计100+100+0



在此无耻地求关注luogu.com.cn/user/812885

T3好像是神秘位运算+贪心 不管了开写
ber左边的哥们怎么睡觉去了（骗你的ta在睡觉前还在摸鱼）
想到了一种偷鸡方法（还好复习过位运算和树状数组）

左边的哥们刚刚起来了，我以为ta终于不颓废了，结果——ta把笔拿开头换个方向继续睡……

a few moments later…… 

ta终于起来了 
又睡下去了…… 
又起来了
又睡下去了…… 

t3做法假了（实际上是不会写） ，t4啥阴 

ta又起来了 
左边的哥们昏昏欲睡，监考老师都看不下去了，叫ta打起精神
ber那监考老师怎么是z老师


左！边！那！哥！们！似！乎！对！拍！了！T！3！没！错！！！！！！！！！ 

不对！  ta！好！像！是！A！K！了 ！！！！！！！！！！！！！！！！！ 

t3好像会了
会了个头！

60还是比较好拿的
25分到手后1min 30分到手 
又1min后50分到手
60pts~

去t4骗点分
24pts到手 

t3:65pts

预估100+100+65+24=289（ccf少爷机多跑点啊）
 
*/
