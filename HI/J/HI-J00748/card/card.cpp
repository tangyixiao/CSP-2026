#include <bits/stdc++.h>
using namespace std;
int n,m,a[205000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int cnt=0;
	while(n--){
		int x;
		cin>>x;
		a[++cnt]=x;
		for(int i=1;i<cnt;i++){
			if(a[i]==a[cnt]){
				for(int j=i;j<cnt;j++){
					a[j]=-1;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		long long ans=0;
		for(int j=1;j<=cnt;j++){
			if(a[j]==i){
				ans++;
			}
		}
		cout<<ans<<" ";
	}
	return 0;
}
