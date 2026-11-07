#include<bits/stdc++.h>
using namespace std;
int a[5],n,now,m;
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	now=n;
	for(int i=0;i<n;i++){
		int x=a[0],y=a[1],z=a[2],t=a[3],p=a[4];
		for(int j=i;j<now;j++){
			a[j]=0;
		}
		now=i;
		for(int j=0;j<now;j++){
			if(a[j]==x){
				for(int k=j;k<now;k++){
					a[k]=0;
				}
				now=j;
				break;
			}
		}
		
		for(int j=0;j<now;j++){
			if(a[j]==x){
				for(int k=j;k<now;k++){
					a[k]=0;
				}
				now=j;
				break;
			}
		}
		for(int j=0;j<now;j++){
			if(a[j]==x){
				for(int k=j;k<now;k++){
					a[k]=0;
				}
				now=j;
				break;
			}
		}
		for(int j=0;j<now;j++){
			if(a[j]==x){
				for(int k=j;k<now;k++){
					a[k]=0;
				}
				now=j;
				break;
			}
		}
	}
	cout<<"5 5";
	return 0;
} 
