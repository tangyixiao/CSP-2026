#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[500010];
int sum[300010],ans=0;
signed main(){
	//while(1)rp++;
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[a[i]]++;
	}
	if(n<=500){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				sum[j]++;
				for(int k=1;k<j;k++){
					if(a[k]==a[j]){
						for(int s=k;s<j;s++)sum[s]--;
						break;
					}
				}
			}
		}
		for(int i=1;i<=m;i++){
			cout<<sum[i]<<' ';
		}
		return 0;
	}
	for(int i=1;i<=m;i++){
		ans+=sum[i];
		cout<<ans<<' ';
	}
	return 0;
}
