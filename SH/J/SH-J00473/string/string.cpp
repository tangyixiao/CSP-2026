#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	
	int a[n+1];
	char b[n+1];
	
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	
	int l=1,r=n;
	long long sum=0;
	while(l<=r){
		if(b[l]==b[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}else if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}else{
				l++;r--;
			}
		}else{
			if(a[l]>a[r]){
				sum+=a[r];
				a[l]-=a[r];
				r--;
			}else if(a[l]<a[r]){
				sum+=a[l];
				a[r]-=a[l];
				l++;
			}else{
				sum+=a[l];
				l++;r--;
			}
		}
	}
	cout<<sum;
	return 0;
}
