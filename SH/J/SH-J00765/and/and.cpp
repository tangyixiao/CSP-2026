#include<iostream>
using namespace std;
const int maxN=200002;
int dp[maxN],ndp[maxN],a[maxN];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n;i++) ndp[i]=2147483647;
	for (int i=1;i<=m;i++){
		for (int j=0;j<=n;j++){
			dp[j]=ndp[j];
			ndp[j]=0;
		}
		for (int j=1;j<=n;j++){
			ndp[j]=max(ndp[j-1],(dp[j-1])&(a[j]));
		}
	}
	cout<<ndp[n]<<endl;
	return 0;
}
