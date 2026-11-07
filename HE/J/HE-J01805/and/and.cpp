#include<bits/stdc++.h>
using namespace std;
int n,m,ma=0;
int a[100001];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
		if(a[i] and a[j]>ma){
			ma=a[i] and a[j];
		}
	}
}
	cout<<ma;
	return 0;
}
