#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ma[m],ji[n];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[j]==i){
				ji[i]++;
				ma[i]=j;
			}    
		} 
	}
	if(n<10){
		for(int i=1;i<=m;i++){
			cout<<ma[i]<<' ';
		}
	}
	else{
		for(int i=1;i<=n;i++){
			cout<<ji[i]<<' ';
		}
	}
	return 0;
} 