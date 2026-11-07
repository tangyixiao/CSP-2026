#include <bits/stdc++.h>
#include <queue>
using namespace std;
int a[10001];
int n,m,w,top=1,ppp=1,o[100001];
int main(){
	cin>>n>>m;
	for(int i =1;i<=n;i++){
		cin>>w;
	for(int j =1;j<=top;j++){
		if(a[j]==w){
			for(int k =1;k<=j;k++){
				top++;
			}
		}
	}
		a[ppp]=w;
		ppp++;
	}
	for(int i =1;i<=m;i++){
		for(int j =top;j<=ppp;j++){
			if(i==a[j]){
				o[i]+=1;
			}
		}
	}	
		
	for(int i =1;i<=m;i++){
		cout<<o[i]<<" ";
	}
}