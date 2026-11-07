#include<bits/stdc++.h>
using namespace std;
long long dp[100100][100100];
int tong[100010];
bool cmp(long long a,long long b){
	return a>b;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>dp[0][i];
		tong[dp[0][i]]++;
	}
	long long t,MAX=-1,sj=-1;
//	sort(a,a+b,cmp);
	for(long long k=0;k<m;k++){
	
	for(long long i=0;i<n;i++){
		for(long long j=i+1;j<n;j++){
			if(max(dp[k][i]&dp[0][j],dp[k+1][i])==dp[k][i]&dp[0][j]&&tong[dp[0][j]]<=0) continue;
//			dp[k+1][i]=max(dp[k][i]&a[j],max(dp[k+1][i],dp[k+1][i+1]));
//			if(max(dp[k][i]&a[j],dp[k+1][i])==dp[k][i]&a[j]) sj=j;
			dp[k+1][i]=max(dp[k][i]&dp[0][j],dp[k+1][i]);
			tong[dp[0][j]]--;
		}
//		tong[i][a[sj]]--;
//		sj=-1;
		
	}
	}
	
/*	
	for(long long i=0;i<m+1;i++){
		for(long long j=0;j<n;j++){
			
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
*/	
	
	

	
	
	
	for(long long i=0;i<n;i++){
		MAX=max(MAX,dp[m-1][i]);
	}
	cout<<MAX;
	return 0;
 } 
 /*
4 2
3 15 12 12


5 3
31 3 1 15 7
Trick||Treat!
 */
