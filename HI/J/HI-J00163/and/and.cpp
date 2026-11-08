#include <bits/stdc++.h>
using namespace std;
long long a[10005];
bool cmp(long long x,long long y){
	return x>y;
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int sum=0;
	sort(a+1,a+n,cmp);
	sum=a[1];
	for(int i=2;i<=m;i++){
		sum=sum&a[i];
		cout<<a[i];
	}
	cout<<sum;
	return 0;
}

