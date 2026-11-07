#include<bits/stdc++.h>
using namespace std;
int num;
int arr[500010];
int arr2[300010];
int arr3[300010];
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	} 
	for(int i=1;i<=n;i++){
		int r=1;
		for(int j=i;j<=n;j++){
			arr2[r++]=arr[j];
			for(int k=1;k<r;k++){
				if(arr2[k]==arr[j]){
					r=k+1;
					break;
				}
			}
		}
		for(int j=1;j<=r-1;j++){
			arr3[arr2[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<arr3[i]<<" ";
	}
	return 0;
}