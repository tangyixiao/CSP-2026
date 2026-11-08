#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main(){

	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	long long n,m,x,sum,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x;
		a[i]=x;
	}
	for(int i=1;i<=n;i++){
		sum=a[i];
		for(int j=1;j<=m;j++){
			sum=sum&a[i+j];
		}
		if(ans<sum){
			ans=sum;
		}
	}
	cout<<ans;
	return 0;
}
