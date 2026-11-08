#include<bits/stdc++.h>
using namespace std;
int main(){int64_t op;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	int max_1=0;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	max_1=a[n-1];
	for(int i=n-2;i>=n-m;i--){
		max_1=max_1&a[i];
	}
	cout<<max_1; 
	return 0;
}
