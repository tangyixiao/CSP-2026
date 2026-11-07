#include <bits/stdc++.h> 
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int a[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	sort(a,a+n);
	if(m==1){
		cout<<a[n-1];
	}else if(m==2){
		cout<<a[n-1] and a[n-2];
	}else if(m==n){
		int qwe=a[0];
		for(int i=1;i<n;i++){
			qwe=qwe and a[i];
		}
		cout<<qwe;
	}else{
		int qwe=a[n-1];
		for(int i=1;i<m;i++){
			qwe=qwe and a[n-1-i];
		}
		cout<<qwe;
	}
	return 0;
}