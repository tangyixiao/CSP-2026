#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a[200001];
	char b[200001];
	int n;
	long long sum=0;
	cin>>n;
	int l=1,r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	} 
	while(l<r){
		if(b[l]==b[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}
			if(a[l]==a[r]){
				l++;
				r--;
			}
		}
		else {
			if(a[l]>a[r]){
				sum+=a[r];
				a[l]-=a[r];
				r--;
			}
			if(a[l]<a[r]){
				sum+=a[l];
				a[r]-=a[l];
				l++;
			}
			if(a[l]==a[r]){
				sum+=a[l];
				l++;
				r--;
			}
		}
	}
	cout<<sum;
	return 0;
} 