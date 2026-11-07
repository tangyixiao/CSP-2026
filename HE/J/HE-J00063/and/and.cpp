#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int max=-1000;
	int n,m;
	cin>>n>>m;
	int a[200005]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	max=a[n-1]&a[n-2];
	for(int i=n-3;i>=m-1;i--){
		max=max&a[i];
	}
	cout<<max;
	return 0;
} 
