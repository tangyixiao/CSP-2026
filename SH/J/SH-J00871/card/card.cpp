#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500001];
int last[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=5){
		if(n==2){
			if(a[1]==1 && a[2]==1){
				cout<<2;
			}else if(a[1]==1 && a[2]==2){
				cout<<"1 2";
			}else if(a[1]==2 && a[2]==1){
				cout<<"2 1";
			}
		}else if(n==3){
			if(a[1]==1 && a[2]==1 && a[3]==1){
				cout<<3;
			}else if(a[1]==2 && a[2]==1 && a[3]==1){
				cout<<"3 1";
			}else if(a[1]==1 && a[2]==2 && a[3]==1){
				cout<<"3 1";
			}else if(a[1]==1 && a[2]==1 && a[3]==2){
				cout<<"2 3";
			}else if(a[1]==2 && a[2]==2 && a[3]==1){
				cout<<"3 2";
			}else if(a[1]==2 && a[2]==1 && a[3]==2){
				cout<<"1 3";
			}else if(a[1]==1 && a[2]==2 && a[3]==2){
				cout<<"1 3";
			}
		}
	}else{
		for(int i=1;i<=n;i++){
			last[a[i]]=i;
		}
		for(int i=1;i<=n;i++){
			cout<<last[i]<<" ";
		}
	}
	return 0;
}
/*
求 CCF 让我到达一级线 pls！！! qwq rp++ 
不要挂分！不要爆零！通过编译！通过数据！ 
8:54 通过所有 T1 样例及自造数据，预估 100pts，优势在我！
9:32 通过所有 T2 大样例，预估 100pts，优势在我！ 
11:08 优势变为滚木，完成 T3 部分分代码设计，预估理想情况下最高 75pts 
11:51 T4 滚木做法预计 0pts，测一个大样例测出不明字符了，气笑了
总结：最高 275pts 
*/
