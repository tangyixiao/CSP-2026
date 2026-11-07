#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,x[n],count=0;
	long long ans=0;
	cin>>n>>m;
	long long a[n]={0};
	long long b[n]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}sort(a,a+n);
	for(int i=0;i<n;i++){
		b[i]=a[n-i-1];
	}
	if(m==1){
		ans=b[0];
		return 0;
	}else{
		ans=b[0];
		for(int i=1;i<m;i++){
			ans=ans&b[i];
		}
	}
	cout<<ans;
	return 0;
} 

