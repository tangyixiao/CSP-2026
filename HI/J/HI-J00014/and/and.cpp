#include<bits/stdc++.h>
using namespace std;
long long a[500001];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int i=1;i<=n-m+1;i++){
		int sum=a[i];
		for(int j=1;j<m;j++){
			sum=sum&a[i+j];
		}
		if(sum>ans){
			ans=sum;
		}
	}
	cout<<ans<<endl;
	return 0;
}

