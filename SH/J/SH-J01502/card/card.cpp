#include<bits/stdc++.h>
using namespace std;
int a[500000],b[300000],c[500000],n;
int card(int p){
	for(int i=0;i<p;i++){
		a[i]==0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
	}
	for(int i=p;i<n;i++){
		for(int j=p+1;j<n;j++){
			if(a[i]==a[j]){
				for(int q=i;q<j;q++) a[q]=0;
			}
		}
	}
	return 0;
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
	for(int i=0;i<n;i++){
		c[i]=a[i];
	}
	for(int i=1;i<n;i++){
		card(i);
		for(int j=0;j<n;j++){
			b[a[i]]++;
			a[i]=c[i];
		} 
	}
}
