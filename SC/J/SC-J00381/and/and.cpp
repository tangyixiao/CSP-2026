#include<bits/stdc++.h>
using namespace std;
int b[2005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if(m==1){
		long long maxa=0,a;
		for(int i=1;i<=n;i++){
			cin>>a;
			maxa=max(maxa,a);
		}
		cout<<maxa;
	}
	else if(m==n){
		long long a,sum;
		cin>>a;
		sum=a;
		for(int i=2;i<=n;i++){
			cin>>a;
			sum&=a;
		}
		cout<<sum;
	}
	else if(m==n-1){
		int ans=0,sum=-1;
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(j==i){
					continue;
				}
				for(int k=0;k<n;k++){
					if(sum==-1){
						sum=b[j];
						continue;
					}
					if(k==j||k==i)continue;
					sum&=b[j];
				}
				ans=max(ans,sum);
				sum=-1;
			}
			
		}
		cout<<ans;
	}
	else{
		int ans=0;
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(j==i){
					continue;
				}
				ans=max(ans,b[i]&b[j]);
			}
		}
		cout<<ans;
	}
	return 0;
}