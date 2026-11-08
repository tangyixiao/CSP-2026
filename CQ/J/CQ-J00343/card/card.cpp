#include<bits/stdc++.h>
using namespace std;

int arr[500005];
int brr[500005];
int crr[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i]; 
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(brr[arr[j]]==1){
				for(int k=1;k<=n;k++) brr[k]=0;
				brr[arr[j]]++;
			}else{
				brr[arr[j]]++;
			}
		}
		for(int j=1;j<=n;j++){
			if(brr[j]) crr[j]++; 
		}
		for(int k=1;k<=n;k++) brr[k]=0;
	}
	for(int i=1;i<=m;i++){
		cout<<crr[i]<<" ";
	}
	return 0;
}
