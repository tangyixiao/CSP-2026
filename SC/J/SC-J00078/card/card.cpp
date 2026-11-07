#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000010];
int pos[1000010];
int last[1000010];
int f[1000010];
int vis[1000010];
int vist[1000010];
int val[1000010];
int t=0;
int r=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		last[i]=pos[a[i]];
		f[pos[a[i]]]=i;
		pos[a[i]]=i;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			vis[j]=0;
		
		}
		for(int j=1;j<=m;j++)
			vist[j]=0;
		t=0;
		for(int j=i;j<=n;j++){
			if(vis[j]==1){
				continue;
			}
			if(t==1&&r==j){//区间结束 
				t=0;
				r=0;
			}
			if(t==1){
				vis[j]=1;//收走 
				continue; 
			}
			if(f[j]!=0){
				t=1;
				r=f[j];//区间结束位置 
				vis[j]=1;//收走 
			}
		}
//		for(int j=1;j<=n;j++){
//			cout<<vis[j]<<" "; 
//		} 
		for(int j=i;j<=n;j++){
			if(vis[j]==0){
				if(vist[a[j]]==0){
					val[a[j]]++;
					vist[a[j]]=1;
				}	
			}
			
		}
		
		//cout<<endl;
		
	} 
	for(int i=1;i<=m;i++){
		cout<<val[i]<<" ";
	}
	return 0;
}
/*
2h大战 T4 
观察题目，发现n高达2*10^5
如果依次模拟每一局，肯定超时
考虑每一局之间的关系，对问题进行转化 
怎样才能使点数为i的卡牌留下？
则他一点不在某个区间之间
用last[i]数组记录a[i]上一次出现的位置 last[i]~i即为一个区间


 
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/