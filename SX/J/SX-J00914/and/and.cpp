#include<bits/stdc++.h>
using namespace std;
long long n,m;
int a[2005];
bool b[2000005][35];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	if(m==1){
		long long ans=-1;
		for(int i=1;i<=n;i++){
			long long x;
			cin>>x;
			if(x>ans)ans=x;
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		long long ans=4294967295;
		for(int i=1;i<=n;i++){
			long long x;
			cin>>x;
			ans=(ans&x);
		}
		cout<<ans;
		return 0;
	}
	if(n<=2000&&m==2){
		long long ans=-1;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(ans<(a[i]&a[j]))ans=(a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		long long x,sum=1;
		cin>>x;
		while(x){
			a[sum]+=x%2;
			b[i][sum]=x%2;
			x/=2;
			sum++;
		}
	}
	int jl=0;
	for(int i=35;i>=1;i--){
		if(a[i]>=m){
			jl=i;
			break;
		}
	}
	if(jl==0){
		cout<<0;
		return 0;
	}
	long long ans=pow(2,jl-1);
	for(int i=jl-1;i>=1;i--){
		if(a[i]<m)continue;
		long long js=0;
		for(int j=1;j<=n;j++){
			if(b[j][i]==1&&b[j][jl]==1)js++;
			else b[j][i]=0;
		}
		if(js>=m)ans+=pow(2,i-1);
	}
	cout<<ans;
	cout<<endl;
	return 0;
}