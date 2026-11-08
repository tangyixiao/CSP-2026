#include<bits/stdc++.h>
using namespace std;
int arr[500005];
int zm[300005];
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=a;i++){
		int cy=i;
		for(int j=i+1;j<=a;j++){
			for(int q=i;q<j;q++){
				if(arr[q]==arr[j]){
					cy=j;
				}
			}
		}
	
		for(int j=cy;j<=a;j++){
			
			zm[arr[j]]++;
		}
	
	}
	for(int i=1;i<=b;i++){
		cout<<zm[i]<<" ";
	}
		
	return 0;
	
}
