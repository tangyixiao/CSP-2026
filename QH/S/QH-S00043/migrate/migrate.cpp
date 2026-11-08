#include<iostream>
using namespace std;
int c,t,n,dp2[2000005];
long long d;
long long x[2000005];
int main(){
	freopen("migrate.in", "r", stdin);
	freopen("migrate.out", "w", stdout);
	cin>>c>>t;
	while(t--){
		cin>>n>>d;
		int ans=0;
		for(int i=1;i<=n;i++){
			cin>>x[i];
		}
		for(int j=1;j<=n;j++){
			dp2[j]=1;
			
		}
		for(int i=1;i<=n-3;i++){
			for(int j=1;j<=n;j++){
				dp2[j]=1;
			
			}
			for(int j=i+3;j<=n;j++){
				if(x[j]-x[j-2]<=d){
					dp2[j]=dp2[j-1]+1;
				}
				if(x[j]-x[j-3]<=d){
					dp2[j]+=1;
				}
				
			}
			for(int j=1;j<=n;j++){
				if(dp2[j]==2){
					ans++;
				}
			}
			
		}
		cout<<ans<<endl;
	}
	return 0;
}
