//#include<bits/stdc++.h>
//using namespace std;
//int n,m;
//int a[10000010];
//int maxd=0;
//void f(int x,int all,int o){
//	if(o==m){
//		if(all>maxd){
//			maxd=all;
//		}
//		return;
//	}
//	for(int i=x+1;i<=n;i++){
//		f(i,(o==0?a[i]:(all&a[i])),o+1);
//	}
//}
//int main(){
//	cin>>n>>m;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	f(0,1,0);
//	cout<<maxd;
//	return 0;
//} 
#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100010];
int dp[100010][100010]={0};
int maxd=0;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		dp[1][i]=a[i];
	}
	for(int i=2;i<=m;i++){
		for(int j=i;j<=n;j++){
			for(int z=1;z<j;z++){
				dp[i][j]=max(dp[i][j],(dp[i-1][z]&a[j]));
			}
		}
	} 
	for(int i=1;i<=n;i++){
		if(dp[m][i]>maxd){
			maxd=dp[m][i];
		}
	}
	cout<<maxd;
	return 0;
} 

