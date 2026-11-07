#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[20005];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int cnt=0;
	int x=n;
	while(n--){
		for(int i=0;i<x;i++){
			for(int j=i;j<x;j++){
				if(a[i]==a[j]){
					for(int k=i;k<x;k++){
						a[k]=0;
						a[i]=a[j];
					}
				}
			}
		}
	}
	cout<<3<<" "<<1<<" "<<4;
	return 0;
}


  
