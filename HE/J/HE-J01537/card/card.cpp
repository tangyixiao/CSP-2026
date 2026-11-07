#include<bits/stdc++.h>
using namespace std;

int n,m;
long long card[500005],ans[300005];

main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>card[i];
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			ans[i]++;
		}
	}
	for(int i=n-1;i>=0;i--)cout<<ans[i]<<' ';
	return 0;
}
