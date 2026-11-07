#include<bits/stdc++.h>
using namespace std;
	int a[100000],b[100000];
	string c[100000];
	int cont[100];
int n;
int main(){
	cin>>n;
	for(int i=1;i<=10;i++){
		cont[i]=0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		if(c[i]==c[1]){
			cont[1]++;
		}
		if(cont[1]==n){
			cout<<0;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]==a[1]){
			cont[2]++;
		}
		if(cont[2]==n){
			for(int x=1;x<=n/2;x++){
				for(int q=n;q>=n/2;q--){
					if(c[x]!=c[q]){
						cont[3]++;
					}
				}
			}
			cout<<cont[3]*a[1];
		}
	}
}