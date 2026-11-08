#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long arr[n]={};
	string str;
	for(long long i=0;i<n;i++){
		cin>>arr[i]>>str[i];
	}
	long long num=0;
	for(long long i=0,j=n-1;i<n/2,j>=n/2;){
		long long pllus;
		if(arr[i]>arr[j]){
			pllus=arr[i]-arr[j];
		}else{
			pllus=arr[j]-arr[i];
		}
		if(str[i]!=str[j]){
			if(arr[i]>arr[j]){
				num+=arr[j];
				j--;
				arr[i]=pllus;
			}else{
				num+=arr[i];
				i++;
				arr[j]=pllus;
			}
		}
	}
	cout<<num;
	return 0;
}

