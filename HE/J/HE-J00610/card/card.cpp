#include<bits/stdc++.h>
using namespace std;
int n,m,a[400000],tot[400000],q1[400000],fro,bak;

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=bak;j++){
			q1[j]=0;
		}
		fro=1;
		bak=1;
		for(int j=i;j<=n;j++){
			bak++;
			q1[bak]=a[j];
			for(int k=1;k<bak;k++){
				if(q1[bak]==q1[k]){
					fro=k+1;
					break;
				}
			}
		}
		for(int j=fro;j<=bak;j++){
			tot[q1[j]]++;
		}
	}
	for(int i=1;i<=n;i++){
		cout << tot[i]<<" ";
	}
	return 0;
} 
