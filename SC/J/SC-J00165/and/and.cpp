#include<bits/stdc++.h>
using namespace std;
int a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long mx=0;
	for(int i=1;i+m-1<=n;i++){
		long long sum=a[i];
		for(int j=i+1;j<=i+m-1;j++){
			sum=sum&a[j];
		}
		mx=max(mx,sum);
	}cout<<mx;
	return 0;
}
