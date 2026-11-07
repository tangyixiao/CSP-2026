#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+10,M=3e5+10;
int arr[N];
int tong_shu[M];//上一个下标 
int tong_win[M];
int tong_zhi[M];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++){//第i局
		 for(int j=i;j<=n;j++){
		 	if(tong_shu[arr[j]]==0) 
			 {
			 	tong_shu[arr[j]]++;
			 	tong_zhi[arr[j]] = j;
			 }
		 	else{
		 		for(int k=tong_zhi[arr[j]];k<j;k++){
		 			tong_shu[arr[k]]=0;	
				 } 
				 tong_shu[arr[j]]++;
			 }
		 }
		 for(int j=1;j<=m;j++){
		 	if(tong_shu[j]!=0){
		 		tong_shu[j]=0;
		 		tong_win[j]++;
			 }
		 }
		
	}
	for(int i=1;i<=m;i++){
		cout<<tong_win[i]<<" ";
	}
	
	
	return 0;
} 