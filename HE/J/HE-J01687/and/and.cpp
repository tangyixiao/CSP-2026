#include<bits/stdc++.h>
using namespace std;
long long n,m,a[1000000],b[1000000],dp[1000000],w;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	memset(dp,0xff,sizeof(dp));
	if(m==n){
		int c=0; 
		for(int i=1;i<=n;i++)c&=a[i];
		cout<<c;
	}
else if(m==1||m==2){
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
//		cout<<(dp[j-1]&a[i])<<" ";
			dp[j]=max(dp[j],dp[j-1]&a[i]);
			
		}
	}
	cout<<dp[m];
}	
else{
////cout<<w; 
	sort(a+1,a+n+1,cmp);
	w=a[1];
	for(int i=2;i<=m;i++){
			w&=a[i];
		
//		cout<<a[i];
//		cout<<w;
	}
	cout<<w;
}
fclose(stdin);
fclose(stdout);
	return 0;
}
//&
///* 8 a[5]=4;
