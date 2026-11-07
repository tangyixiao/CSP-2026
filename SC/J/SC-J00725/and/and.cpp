#include<bits/stdc++.h>
using namespace std;
long long n,m,arr[200005],sum;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	sum=arr[n-1];
	for(int i=n-2;i>=n-m;i--){
		sum&=arr[i];
	}
	cout<<sum;
	return 0;
}