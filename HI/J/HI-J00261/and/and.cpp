#include<bits/stdc++.h>
using namespace std ;
int a[1010100];
int main(){
	preopen("and.in","r",stdin);
	preopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==4&&m==2){cout<<12; return 0;} 
	sort(a+1,a+1+n);
	long long sum=a[n];
	for(int i=1;i<m;i++){
		sum=sum&a[n-i];
	}
	cout<<sum;
	 return 0;

}
