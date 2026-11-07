#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int a[N],ans[N],last[N];
bool b[N];
int num[N];
int f[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	bool A_A=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[i]=last[a[i]];
		last[a[i]]=i;
		ans[a[i]]=i;
		if(a[i]<a[i-1]) A_A=0;
	}
	//特殊A 16pts: 
	if(A_A){
		for(int j=1;j<=m;j++){
			cout<<ans[j]<<' ';
		}
		return 0;
	}
	for(int j=1;j<=m;j++){
		ans[j]=0;
	}
	//暴力 24pts
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			num[j]=0;
		}
		for(int j=1;j<=n;j++){
			b[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(f[j]>=i){
				for(int k=f[j];k<j;k++){
					if(!b[k]) num[a[k]]--,b[k]=1;
				}
			}
			num[a[j]]++;
		}
		for(int j=1;j<=m;j++){
			if(num[j]){
				ans[j]++;
			}	
		}
	}
	for(int j=1;j<=m;j++){
		cout<<ans[j]<<" ";
	}
	return 0;
}
//上了个厕所 1 41 24
//最美妙的是我玩过这个游戏! 
//3 1 2 1 3 2 3 1 2 1
//本次比赛难度:红黄橙绿 