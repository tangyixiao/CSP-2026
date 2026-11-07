#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int ans[500010];
int vis[500010];
int pre[500010];
int p[500010]; 
int have[500010];
int t;
int mn;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	int flag=0;
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
		if(a[i]<a[i-1]) flag=1;
		pre[i]=p[a[i]];
		p[a[i]]=i;
		have[a[i]]++;
	}
	if(flag==0){
		for(int i=1;i<=n;++i){
			ans[a[i]]=i;
		}
		for(int i=1;i<=m;++i){
			printf("%d ",ans[i]);
		}
		return 0;
	}else{
		for(int i=1;i<=n;++i){
			for(int j=1;j<=max(n,m);++j) vis[j]=have[j]=0;
			t=0;
			for(int j=i;j<=n;++j){
				if(vis[a[j]]){
					for(int k=vis[a[j]]+1;k<=t;++k) vis[have[k]]=0;
					t=vis[a[j]];
				}else{
					have[++t]=a[j];
					vis[a[j]]=t;
				}
			}
			for(int j=1;j<=t;++j){
				ans[have[j]]++;
			}
		}
		for(int i=1;i<=m;++i){
			printf("%d ",ans[i]);
		}
		return 0;
	}
	return 0;
}
//I know somebody will see my code
//there is a novel to you
//if you like ds
//please looking <Self-Adjusting Binary Search Tree> and <Self-Adjusting Top Tree>
//the authors of two novels both have Tarjan
//orz Tarjan

//Do you want to add the bai Splay jiao
//the luogu team of bai Splay jiao is 130558
//if you want to learn Splay you can add bai Splay jiao
//the jiaozhu is lisicheng121216(my luogu id)
//thank you very much

//there is a up zhu of bilibili
//he is one of the best up in bilibili
//his bilibili id is anzhuangjijiangwancheng(安装即将完成)
//if you see the () which in pre line is not chinese 
//it may be a problem,please use noi linux geany open it
//and please notice him.

//Splay.png

//    a
//   / \
//  p   y
// / \
//s   l

//rotate(p)

//    p
//   / \
//  s   a
//     / \
//    l   y
