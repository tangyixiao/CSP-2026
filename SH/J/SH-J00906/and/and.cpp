#include<bits/stdc++.h>
using namespace std;
int n,m;
long long mx=2147483647;
long long arr[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	reverse(arr,arr+n);
	for(int i=0;i<m;i++){
		mx=mx&arr[i];
	}
	cout<<mx;
	return 0;
}
