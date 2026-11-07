#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	if (n==m){
		for (int i=1;i<=n;i++){
			cout<<i;
		}
		return 0;
	}
	int d=0;
	while(n){
		for (int i=0;i<n;i++){
			for (int j=0;j<n-1;j++){
				if (a[i]==a[j]){
					a[n]-=a[i];
					d++;
				}
			}
		}
		n--;
	}
	cout<<a;
}
