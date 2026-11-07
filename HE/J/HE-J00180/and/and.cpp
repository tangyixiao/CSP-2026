#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],dp[N];
int ans=-1;
int yu(int x,int y){
	int f[100],f1[100],f2[100];
	memset(f,0,sizeof(f));
	memset(f1,0,sizeof(f1));
	int cnt=0,cnt1=0;
	while(x!=0){
		f[++cnt]=x%2;
		x/=2;
	}
	while(y!=0){
		f1[++cnt1]=y%2;
		y/=2;
	}
	int cnt2=max(cnt1,cnt);
	for(int i=cnt2;i>=1;i--) f2[i]=f[i]&f1[i];
	int an=0;
	for(int i=cnt-1;i>=0;i--) an+=f2[i+1]*pow(2,i);
	return an;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
			dp[j]=max(dp[j],yu(dp[j-1],a[i]));
			ans=max(dp[j],ans);
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
