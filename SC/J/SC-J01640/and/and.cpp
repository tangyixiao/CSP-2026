#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		a[i]=k;
	}
	int sum=0;
	for(int i=1;i<n;i++){
		sum=max(a[i-1]&a[i],sum);
	}
	for(int i=1;i<m;i++){
		for(int i=1;i<n;i++){
			sum=max(a[i-1]&a[i]&sum,sum);
		}
	}
	cout<<sum;
	return 0;
}