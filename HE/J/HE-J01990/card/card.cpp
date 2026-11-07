#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[5005];
int s[5050];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
		int ans=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}for(int i=1;i<=n;i++){
			int d[5005]={},l[5005]={};
			for(int j=i;j<=n;j++){
				d[j]=a[j]; 
			}for(int j=i;j<=n;j++){
				if(l[d[j]]==0){
					l[d[j]]=j;
				}else{
					for(int k=l[d[j]];k<j;k++){
						d[k]=0;l[k]=0;
					}l[d[j]]=j;
				}
			}
			for(int j=i;j<=n;j++){
				if(d[j]!=0)s[d[j]]++;
			}
		}for(int i=1;i<=m;i++){
			cout<<s[i]<<" ";
	}
	
	
	//如果有一个名叫zym的猫猫看到我请把我放到迷惑行为里(喵喵
	//@maimai
	// I dream and I do
	//虽然我知道你们很喜欢奥赛啦【数据删除】 
	//祝你们进省队，
	//然而这个去年已经退了奥赛的高中生还是来打了J组
	//这么写我是不是很唐……
	//你们之前都是文化课考得比我好的啦
	//希望你们明年打完之后还能继续跟上高中的知识啊
	//致我曾经的【朋友】们 
	//zym ljb zzh ljr txm wjq 还有两个人应该不把我当朋友吧…… 
	//应该不会有别人认出来是谁吧
	//如果你们看到了并且猜到了我是谁可以来找我哦，有奖竞猜，，
	//你们讲课的风格真该改改了。。。
	//丑陋的代码你们就别嘲笑我了qAq 
	return 0;
}
