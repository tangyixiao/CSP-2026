#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0;
	cin>>n;
	int a[n+1];
	char b[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	int l=0,r=n-1;
	while(l<=r){
		if(a[l]>a[r]){
			a[l]=a[l]-a[r];
			if(b[l]!=b[r]){
				sum=a[r]+sum;
			}
			r--;
		}else if(a[l]<a[r]){
			a[r]=a[r]-a[l];
			if(b[l]!=b[r]){
				sum=a[l]+sum;
			}
			l++;
		}else{
			if(b[l]!=b[r]){
				sum=a[l]+sum;
			}
			a[l]=0;
			a[r]=0;
			l++;
			r--;
		}
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}