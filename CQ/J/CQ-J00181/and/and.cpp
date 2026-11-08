#include<bits/stdc++.h>
using namespace std;
int a[200005],dp[200005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
    }
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
		    dp[j]=max(a[i],(dp[j-1]&a[i]));
		}
	}
	cout<<dp[m];
	return 0;
}
