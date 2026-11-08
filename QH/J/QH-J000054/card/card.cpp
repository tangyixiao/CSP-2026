#include<iostream>
#include<string>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int a[10005];
	cin>>n>>m;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			for(int k=n-1;k>=0;k--){	
			if(a[i]==a[k]);
		}
		}
	}
	return 0;
} 
