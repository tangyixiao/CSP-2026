#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int brr[100005];
char t[100005];
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	int n,a=0,k=0,count=0,x=0,y=0;
	cin>>n;
	long long s=0,rum=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i]>>t[i];
		s+=arr[i];
	}
	s=s/2+1;
	for(int i=1;i<=n;i++){
		k+=arr[i];
		if(k>=s){
			x=k-s;
			y=s-k+arr[i];
			count=i;
		}
	}
	for(int i=1;i<count;i++){
		brr[i]+=brr[i-1]+arr[i];
	}
	brr[count-1]+=y;
	for(int i=n;i>count;i--){
		brr[i]+=brr[i+1]+arr[i];
	}
	brr[count+1]+=x;
	for(int i=1;i<count;i++){
		if(t[i]!=t[n-i]){
			if(arr[i]<=arr[n-i]){
				rum+=brr[i]-brr[i-1];
			}
			if(arr[i]>arr[n-i]){
				rum+=brr[n-i]-brr[n-i+1];
			}
		}
		if(arr[i]>arr[n-i]){
			for(int j=count+1;i<=n-i;i++){
				brr[j]-=brr[n-i]-brr[n-i+1];
			}
			for(int j=count-1;j>=i;j--){
				brr[j]-=brr[n-i]-brr[n-i+1];
			}
			continue;
		}
		for(int j=count+1;i<=n-i;i++){
			brr[j]-=arr[i];
		}
		for(int j=count-1;j>=i;j--){
			brr[j]-=arr[i];
		}
	} 
	cout<<rum;
	return 0;
} 
