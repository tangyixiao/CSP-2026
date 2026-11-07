#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,s=0;
	cin>>n>>m;
	int a[n]={0},b[n]={0},c[m+1]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		s=0;
		for(int j=i;j<n;j++){
			int e=0;
			for(int k=0;k<s;k++){
				if(b[k]==a[j]){
					e=1;
					int ss=0;
					for(int x=k+1;x<s;x++){
						b[x]=0;
						ss++;
					}
					s-=ss;
				}
			}
			if(e==0){
				b[s]=a[j];
			}
			s++;
		}
		for(int j=1;j<=m;j++){
			for(int k=0;k<s;k++){
				if(b[k]==j){
					c[j]++;
				}
			}
		}
		for(int j=0;j<s;j++){
			b[j]==0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}