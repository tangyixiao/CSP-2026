#include<bits/stdc++.h>
using namespace std;
int a[100001],b[100001],c[100001],d[100001],yj[100001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,maxx=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>maxx)maxx=a[i];
	}
	for(int i=1;i<=n;i++){//n局比赛 
	//	cout<<"第"<<i<<endl; 
		for(int j=1;j<=maxx;j++){
			b[j]=0;//清空 
			d[j]=0;//清空
			yj[j]=0;//清空
		}
		for(int j=i;j<=n;j++){//依次出牌 
			if(b[a[j]]==1){
				for(int k=j-1;k>=1;k--)b[a[k]]=0;
			}
			b[a[j]]=1;
		}
		for(int j=i;j<=n;j++){
			if(b[a[j]]==1){
				yj[a[j]]=1;
			}
		}
		for(int j=1;j<=maxx;j++)if(yj[j]==1)c[j]++;
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<" ";
	return 0;
}