#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a,a+n);
		cout<<a[n-1];
	}else if(m==2){
		int sum=a[0]&a[1];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				sum=max(sum,a[i]&a[j]);
			}
		}
		cout<<sum;
	}else if(m==3){
		int sum=a[0]&a[1]&a[2];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				for(int k=j+1;k<n;k++){
					sum=max(sum,a[i]&a[j]&a[k]);
				}
			}
		}
		cout<<sum;
	}else if(m==n){
		int sum=a[0];
		for(int i=0;i<n;i++){
			sum&=a[i];
		}
		cout<<sum;
	}else if(m==n-1){
		int sum=a[0];
		for(int i=0;i<n-1;i++){
			sum&=a[i];
		}
		int ant=a[0];
		for(int i=1;i<n;i++){
			sum&=a[i];
		}
		cout<<max(ant,sum);
	}
	
	return 0;
} 
