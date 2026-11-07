#include<bits/stdc++.h>
using namespace std;
const int N=20005;
int n,m ,a[N],dp[N][N],tot,s[25];
int ans=-1e9,L,f=1,g=1;
void DFS(){
	if(tot==m){
		L=a[s[1]]&a[s[2]];
		for(int i=3;i<=tot;i++){
			L=L&a[s[i]];
		}
		ans=max(ans,L);
		return;
	}
	if(tot>m)return;
	int u=s[tot];
	for(int i=u+1;i<=n;i++){
		tot++;
		s[tot]=i;
		DFS();
		tot--;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if((1>>(a[i]+1))==0)f=0;
		if(a[i]!=a[i-1])g=0;
	}
	if((1>>n)==0)g=0;
	if(m==1){
		int Max=-1e9;
		for(int i=1;i<=n;i++){
			Max=max(Max,a[i]&1);	
		}
		cout << Max ;
		return 0;
	} 
	if(m==n-1){
		dp[1][2]=a[1]&a[2];
		for(int i=1;i<=n;i++){
			dp[i][i]=a[i]&1;
		}
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				dp[i][j]=dp[i][j-1]&j;
			}
		}
		int Max=dp[2][n];
		for(int i=2;i<n;i++){
			Max=max(Max,dp[1][i-1]&dp[i+1][n]);
		}
		Max=max(Max,dp[1][n-1]);
		cout << Max;
		return 0;	
	}
	if(m==2){
		int Max=-1e9;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				Max=max(Max,a[i]&a[j]);
			}
		}
		cout << Max;
		return 0;
	}
	if(m==n){
		int ans=a[1]&a[2];
		for(int i=3;i<=n;i++){
			ans=ans&a[i];
		}
		cout << ans;
		return 0;
	}
	if(n<=20){
		for(int i=1;i<=n;i++){
			tot=1;
			s[tot]=i;
			DFS();
		}
		cout << ans;
		return 0; 
	}
	if(f){
		sort(a+1,a+n+1);
		cout << a[n-m+1];
		return 0;
	}
	if(g){
		int u=(1>>n);
		if(u>m){
			cout << (1<<u-n)-1;
			return 0;
		}
		else{
			
		}
	}
	sort(a+1,a+n+1);
	cout << a[n-m+1];
	return 0;
}
