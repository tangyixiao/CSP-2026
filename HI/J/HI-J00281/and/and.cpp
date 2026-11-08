#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	long long max=-1000000;
	cin>>n>>m;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=0;i<n;i++){
			if(a[i]>max){
				a[i]=max;
			}
		}
	}
	else if(m==2){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]&a[j]>max)max=a[i]&a[j];
		}
	}
	}
	else if(m==3){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				if((a[i]&a[j])&a[k]>max)max=a[i]&a[j]&a[k];
			}
		}
	}
	}
	cout<<max;
	return 0;
} 
