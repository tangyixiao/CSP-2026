#include<bits/stdc++.h> // 100 if复if，if何其多…… 
using namespace std;
string ans="0000";
string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(!(c1==c2))
	{
		cout<<ans;
		return 0;
	}
	ans[0]='1';
	if(!(s1[0]==s2[0]&&s1[1]==s2[1]))
	{
		cout<<ans;
		return 0;
	}
	ans[1]='1';
	if(!(
		(
			(s1[2]=='A'&&s2[2]=='B')||(s1[2]=='A'&&s2[2]=='C')||
			(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='D'&&s2[2]=='F')
		)
		||
		(
			(s2[2]=='A'&&s1[2]=='B')||(s2[2]=='A'&&s1[2]=='C')||
			(s2[2]=='B'&&s1[2]=='C')||(s2[2]=='D'&&s1[2]=='F')
		)
		))
	{
		cout<<ans;
		return 0;
	}
	ans[2]='1';
	if(!(
		(
			(s1[2]=='A'&&s2[2]=='B')||
			(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='D'&&s2[2]=='F')
		)
		||
		(
			(s2[2]=='A'&&s1[2]=='B')||
			(s2[2]=='B'&&s1[2]=='C')||(s2[2]=='D'&&s1[2]=='F')
		)
		))
	{
		cout<<ans;
		return 0;
	}
	ans[3]='1';
	cout<<ans;
	return 0;
}
/*

I am not drama god 

解密密码是 Trick||Treat! hyw呢…… 

看不见我看不见我……

盲猜一波肯定选不中我，嘿嘿 

选不到我选不到我……

AwA感觉更容易被选中了怎么办？

/(ㄒoㄒ)/~~

算了管他呢！ 

luogu UID:1493649 

不知道上不上得了……

怪期待的AwA 

11:53了 

希望是我预计到348分:( 

我很震惊……出门前拜菩萨真的会有用？！  

emm…… 

算了不写了

感觉写不下什么了

哎？可以炫波CIRCLE~

有道理……

但我不记得他的UID了……

没事在2026/7/24~2027/7/24他的用户名一直都是Orangename 

欢迎大家去 骚扰（划掉）拜访一下他的luogu~

emm……

好像真的没啥写的了？

emm……

算了再喊一下 

YTM！ CX！ CIRCLE！  

盲猜一波Orangename不会看到…… 

emm……

算了就这么多吧。

11:58 

*/
