#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
    long long a[100005];
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	int sum=a[1];
	for(int i=2;i<=m;i++){
		sum=(sum & a[i]);
	}
	cout<<sum;
	return 0;
}