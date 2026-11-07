#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	const int nn=n;
	int a[nn];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[j]<a[j+1]){
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	int sum=a[0];
	for(int i=1;i<m;i++){
		sum=sum&a[i]; 
	}
	cout << sum;
	return 0;
}
