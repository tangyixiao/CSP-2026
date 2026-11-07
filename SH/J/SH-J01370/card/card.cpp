#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[500005];
int t[500005];
int r=1;
int b[300005];

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		
		r=1;
		for(int j=i;j<=n;++j){
			bool flag=false;
			for(int k=1;k<r;++k){
				if(t[r]==a[j]){
					r=k+1;
					flag=true;
					break;
				}
			}
			if(flag==false){
				t[r]=a[j];
				r++;
			}
		}
		for(int j=1;j<r;++j){
			b[t[j]]++;
		}
	}
	for(int i=1;i<=m;++i){
		cout<<b[i];
	}
	return 0;
} 
