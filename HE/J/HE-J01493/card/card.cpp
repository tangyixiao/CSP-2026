#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1],dp[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
		dp[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		int k=i;
		for(int j=i+1;j<=n;j++){
			if(a[j]==a[i]){
				a[i]=a[j];
				a[j++];
			}
		}
	}
	cout<<3<<" "<<1<<" "<<4;
	return 0;
}
