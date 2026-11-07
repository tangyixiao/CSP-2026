#include<iostream>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ai;
	long long need=0,total=0,t=0;
	char String;
	
	cin>>n;
	const int a=n;
	int arr[a];
	char num[a];
	for(int i=0;i<n;i++){
		cin>>ai;
		arr[i]=ai;
		cin>>String;
		num[i]=String;
		total=total+ai;
	}
	const int b=total;
	char arr1[b];
	for(int i=0;i<n;i++){
		for(int j=0;j<arr[i];j++){
			arr1[j+t]=num[i];
			if(j+1>=arr[i]){
				t=t+j+1;
			}
		}
	}
	for(int i=0;i<=(b/2)-1;i++){
		if(arr1[i]!=arr1[b-1-i]){
			need++;
		}
	}
	cout<<need;
	return 0;
} 