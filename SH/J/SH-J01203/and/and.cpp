#include<bits/stdc++.h>
using namespace std;
#define N 1000020
#define ll long long
#define endl "\n"
//#define iscc ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n,m;
int a[N];
int dp[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//system("fc test.ans test.out");
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	dp[1]=a[1];
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
			int x=dp[j-1] and a[i];
			dp[j]=max(dp[j],x);
		} 
	}
	
	cout<<dp[m];
	return 0;
}



