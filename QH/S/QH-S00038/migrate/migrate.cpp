#include<bits/stdc++.h>
using namespace std;
const int N=2e6+7;
long long a[N],s[N]; 
int main(){
	freopen("migrate.in", "r", stdin);
	freopen("migrate.out", "w", stdout);
	int c,t;
	cin>>c>>t;
	while(t--){
		int n;
		long long d;
		cin>>n>>d;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		bool flag=0;
		for(int i=2;i<=n;i++){
			s[i]=a[i]-a[i-1];
		}
		for(int i=3;i<=n;i++){
			if(s[i-1]!=s[i]) flag=1;
		}
		if(flag!=1){
			long long ans=0;
			for(int i=3;i<=n;i++){
				if(1ll*(i-1)*s[2]<=d){
					ans+=(n-i)+1;
				}else{
					break;
				}
			}
			cout<<ans<<'\n';
		}
	}
	return 0;
}
