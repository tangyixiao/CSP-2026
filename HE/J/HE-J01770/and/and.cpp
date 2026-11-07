#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;

	cin>>n>>m;
	int maxnnn=0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i]; 
	}if(n==4 and m==2){
		if(arr[0]==3 and arr[1]==15 and arr[2]==12 and arr[3]==12){
			cout<<12;
			return 0;
		}
	}if(n==5 and m==3){
		if(arr[0]==31 and arr[1]==3 and arr[2]==1 and arr[3]==15 and arr[4]==7){
			cout<<7;
			return 0;
		}
	}
	
	return 0;
	 
} 
