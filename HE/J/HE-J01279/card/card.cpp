#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll a[500005];
ll dp[300005];
ll ans;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=i;k<=j;k++){
				if(a[j]==a[k]){
					ans+=j-k;
					for(int x=1;x<=j-k;x++){
						a[j+x-1]=a[k+x-1];
					}
				}
			}
		}
		for(int j=1;j<=n-ans;j++){
			dp[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<dp[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
