#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	cin>>n>>m;
	int tong[30001]={};
	int pai[50001]={};
	int xz[50001]={};
	for(int i=0;i<m;i++){
		cin>>pai[i];
	}
	int k=0;
	for(int i=0;i<m;i++){//遍历牌堆 
		for(int m1=i;m1<n;m1++){
			for(int j=0;j<k;j++){//查找是否重复 
			if(pai[m1]==xz[j]){
				for(int n1=0;n1<k;n1++){
					xz[n1]=0;
				}k=0;
			}
		}xz[k++]=pai[i];
	}
	for(int man=0;man<k;man++){
		tong[xz[man]]++;
	}
		
	}
	int ans=0;
	for(int i=0;i<m;i++){
		cout<<tong[i]<<" ";
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
