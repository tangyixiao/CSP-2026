#include<iostream>
#include<cstdio> 
using namespace std;
const int N=2e5+7;
int a[N],mk[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m; cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int k=30,ans=0;
	while(k>=0){
		int tar=1<<k,cnt=0;
		for(int i=1;i<=n;i++){
			if(((a[i]&tar)==tar)&&(mk[i]==0)){
				cnt++;
			}
		}
		if(cnt>=m){
			ans|=tar;
			for(int i=1;i<=n;i++) if((a[i]&tar)==0&&mk[i]==0) mk[i]=1;
		}
		k--;
	}
	cout<<ans;
	return 0;
}
/*
打csp，今年已经是第四年了。
学C++，迄今也6年了。
今年终于做出了J组T3，一等奖有望。
情不自禁，赋词一首：
小学考试总校上，红烛昏罗帐。
初中考试张集中，江阔云低，少年乘东风。
而今考试紫竹下，人已初三也。
悲欢离合总无情，点滴阶前，刷题到天明。
2026/10/31 于华东师范大学第二附属中学闵行分校紫竹校区 221机房 
*/ 
