#include<bits/stdc++.h>
using namespace std;
int m,n;
const int N=5e5+10;
int aa[N];
int a[N];
int f[N];
int ka[N];
int find(int x){
	for(int i=1;i<=n+2;i++){
		if(aa[i]==aa[x]&&i!=x){
			return i;
		}
	}
	return -1;
}
int findd(int x){
	for(int i=1;i<=n+2;i++){
		if(aa[i]==x){
			//cout<<i<<" "<<aa[i]<<endl;
			return i;
		}
	}
	return -1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ka[i]=0;
	}
	for(int i=1;i<=n;i++){//轮次 
		for(int j=1;j<=n+2;j++){
			aa[j]=0;
			//ka[j]=0;
			f[j]=0;
		}
		for(int j=i;j<=n;j++){//选卡 
			aa[j]=a[j];
			int zhao=find(j);
			if(zhao!=-1){
				for(int k=zhao;k<j;k++)aa[k]=0;
			}
		}
		for(int j=1;j<=n;j++){
			//cout<<find(j)<<endl;
			f[aa[j]]=1;
		}
		for(int j=1;j<=m;j++){
			if(f[j]!=0)ka[j]+=1;
		}
		
	}
	for(int i=1;i<=m;i++){
		cout<<ka[i]<<" ";
	}
	return 0;
}