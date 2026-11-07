#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long arr[n+1]={0};
	long long ans;
	for(long long i=0;i<n;i++){
		long long a;
		cin>>a;
		arr[i]=a;
	}
	sort(arr, arr+n+1);
	reverse(arr,arr+n+1);
	ans=arr[0];
	for(long long i=0;i<m;i++){
		ans = ans & arr[i];
	}
	cout<<ans;
	return 0;
}
