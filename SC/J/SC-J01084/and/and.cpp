#include<bits/stdc++.h>
using namespace std;
long long n,m,a[2000005],b[2000005],i1,sum,f;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				b[++i1]=a[i]&a[j];
			}
		}
		sort(b+1,b+i1+1);
		cout<<b[i1];
		return 0;
	}
	if(m==n){
		sum=a[1];
		for(int i=2;i<=n;i++){
			sum&=a[i];
		}
		cout<<sum;
		return 0; 
	}
	if(m==n-1){
		for(int i=1;i<=n;i++){
			if(i!=1){
				sum=a[1];
				f=1;
			}else{
				sum=a[2];
				f=2;
			}
			for(int j=1+f;j<=i-1;j++){
				sum&a[j];
			}
			for(int k=i+1;k<=n;k++){
				sum&a[k];
			}
		}
		cout<<sum;
		return 0;
	}
	sort(a+1,a+n+1);
	sum=a[n];
	for(int i=n-1;i>=n-m+1;i--){
		sum&=a[i];
	}
	cout<<sum;
	return 0;
}