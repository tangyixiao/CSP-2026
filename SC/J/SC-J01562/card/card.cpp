#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[n],s[m+1]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			b[j]=1;
		}
		for(int j=i;j<n;j++){
			if(b[j]==1){
				for(int k=j+1;k<n;k++){
				    if(b[k]==1&&a[j]==a[k]){
				    	for(int x=j;x<k;x++){
				    		b[x]=0;
						}
					    break;
				    }
			    }
			}
		}
		for(int j=i;j<n;j++){
			if(b[j]==1){
				s[a[j]]++;
			}
		}
	}
    for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
}