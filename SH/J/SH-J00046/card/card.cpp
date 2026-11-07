#include<bits/stdc++.h>
using namespace std;
int read(){
	int x=0,ch=getchar();
	while(!isdigit(ch)) ch=getchar();
	while(isdigit(ch)) x=x*10+ch-'0',ch=getchar();
	return x;
}
const int N=500005;
int n,m,a[N],ans[N];
int pos[N];
int nxt[N],add[N],num[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;i++) a[i]=read();
	for(int i=n;i>=1;i--){ //加入一个数后 
		if(!pos[a[i]]) nxt[i]=i+1,add[i]=a[i]; //如果右边没有相同，那么就是i+1的答案添加一个数 
		else nxt[i]=pos[a[i]]; //右边有相同，把中间消掉，答案和右侧索引的答案相同 
		pos[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		num[i]++;
		if(add[i]) ans[add[i]]+=num[i];
		num[nxt[i]]+=num[i];
	}
	for(int i=1;i<=m;i++) printf("%d ",ans[i]);
	return 0;
}
/* 
想上迷惑行为大赏喵
今天晚上有Charlie Puth的演唱会！
应该可以AK吧
CCF let me AK J pls
CCF let me AK J pls
CCF let me AK J pls

CCF give me 7 dog pls, I will do everything
CCF give me 7 dog pls, I will do everything
CCF give me 7 dog pls, I will do everything

I like CCF very much
I like CCF very much
I like CCF very much.

洛谷uid=1799673
欢迎开盒。 
RP+=INF^INF。 
*/
