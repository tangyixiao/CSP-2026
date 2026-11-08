#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in",r,stdin);
	freopen("card.out",w,stdout);
	int n,m,n1,k=0;
	cin>>n>>m;
	n1=n;
	int c[m]={},a[n+5]={},a1[n+5]={3};
	for(int i=0;i<n;i++){
		cin>>a1[i];}
	for(int o=0;o<n1;o++){
	for(int i=k;i<n;i++){
		a[i]=a1[i];
		for(int j=0;j<i;j++){
		if(a[j]==a[i]){
			for(int p=0;p<i-1;p++){
			a[p]=0;				
	}		
	}
	}
	}
	for(int i=0;i<n;i++){
		if(a[i] != 0) c[a[i]]++;				
	}
	k++;
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";				
	}
	return 0;
}
