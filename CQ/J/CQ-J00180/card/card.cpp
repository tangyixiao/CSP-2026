#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int brr[100005];
int crr[100005];
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		crr[i]=arr[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			arr[j]=crr[j];
		}
		for(int j=i;j<=n;j++){
			for(int k=0;k<j;k++){
				if(arr[k]==arr[j]){
					for(int c=k;c<j;c++){
						arr[c]=-1;
					}
				}
			}
		}
		for(int j=1;j<=n;j++){
			for(int k=1;k<=m;k++){
				if(arr[j]==k){
					brr[k]++;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<brr[i]<<' ';
	}
	return 0;
} 
