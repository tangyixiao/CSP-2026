#include<bits/stdc++.h>
using namespace std;
int n,m,arr[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i]; 
	}
	sort(arr,arr+n);
	cout<<arr[n-1];
	return 0;
}
