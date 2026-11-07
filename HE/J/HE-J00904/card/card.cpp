#include<bits/stdc++.h>
using namespace std;
const int M=3e5+10;
const int N=5e5+10;
int ans[M],a[N],la[M],ne[M];
//输出,输入,前一个这个数的下标,后一个这个数的下标
bool vis[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		if(!vis[a[i]]){vis[a[i]]=1;la[a[i]]=i;}
		else{
			ne[la[a[i]]]=i;la[a[i]]=i;
		}
	}
	for(int i=1,j;i<=n;i++){
		for(j=1;j<=m;j++)vis[j]=0;
		j=i;
		for(;j<=n;){
			if(!vis[a[j]])ans[a[j]]+=1;
			vis[a[j]]=1;
			if(ne[j]==0)j+=1;
			else j=ne[j];
		}
	}
	for(int i=1;i<=m;i++)
	cout<<ans[i]<<" ";
	return 0;
}
/*4 3
1 2 1 3
*/
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
