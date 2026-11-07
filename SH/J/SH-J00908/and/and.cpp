#include<bits/stdc++.h>
using namespace std;
long long a[200005];
long long b[200005];
long long ans=0;
int n;
int mn1(int x){
	for(int i=1;i<=n;i++){
		ans=max(ans,x&b[i]);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++)ans=max(ans,a[i]);
		cout<<ans;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			b[i]=0;
			mn1(a[i]);
			b[i]=a[i];
		}
		cout<<ans;
	}
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++)ans=ans&a[i];
		cout<<ans;
	}
	else if(m==n-1){
		for(int i=1;i<=n;i++){
			long long sum;
			if(i!=n)sum=a[i+1];
			else sum=a[1];
			for(int j=1;j<=n;j++){
				if((j==i||j==i+1)&&i!=n)continue;
				else if((j==1||j==n)&&i==n)continue;
				else sum=sum&a[j];
			}
			ans=max(ans,sum);
		}
		cout<<ans;
	}
	else cout<<ans;
	return 0;
}
