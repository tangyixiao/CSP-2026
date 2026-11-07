#include <bits/stdc++.h>
using namespace std;
int arr[1000000005],brr[1000000005];
char crr[1000000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	arr[0]=0;
	for(int i=1;i<=n;i++){
		int m;
		cin>>m>>crr[i];
		arr[i]=m+arr[i-1];
	}
	brr[1]=1;
	for(int i=2;i<=n;i++){
		brr[i]=arr[i-1]+1;
	}
	long long sum=arr[n],center,ans=0;
	if(sum%2==1){
		char a,b;
		center=sum/2+1;
		for(int i=1;i<=sum/2;i++){
			for(int j=1;j<=n;j++){
				if(center-i>=brr[j]&&center-i<=arr[j]){
					a=crr[j];
				}
				if(center+i>=brr[j]&&center+i<=arr[j]){
					b=crr[j];
				}
			}
			if(a!=b){
				ans+=1;
			}
		}
	}
	else{
		char a,b;
		center=sum/2;
		for(int i=1;i<=sum/2;i++){
			for(int j=1;j<=n;j++){
				if(center+1-i>=brr[j]&&center+1-i<=arr[j]){
					a=crr[j];
				}
				if(center+i>=brr[j]&&center+i<=arr[j]){
					b=crr[j];
				}
			}
			if(a!=b){
				ans+=1;
			}
		}
	}
	cout<<ans;
	return 0;
}
