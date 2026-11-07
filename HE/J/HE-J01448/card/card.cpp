#include <bits/stdc++.h>
using namespace std;
int arr[10000005];
int ar[10000005];
int ar2[3000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
   int n,m;
   cin>>n>>m;
   int x=1;
   for(int i=1;i<=n;i++){
   	cin>>arr[i];
   	ar[i]=arr[i];
   }   	
//..................................................
   for(int i=x;i<=n;i++){
   	for(int p=i;p<=n;p++){
   		arr[p]=ar[p];
		   
	   }
	   for(int j=i-1,j>=1;j--){
	   		if(arr[j]==arr[i]){
	   			for(int k=i-1;k>=x;k--){
	   				arr[k]=0;
				} 
			}
		}
		
		 for(int j=n,j>=x;j--) {
	   			for(int k=1;k<=n;k++){
	   				if(arr[k]==j)ar2[j]++;
				} 
		    }
			 x++;
		}
   
   //..................................................
   for(int i=1;i<=n;i++){
   	cout<<arr2[i]<<" ";
   }
   return 0;	
}
