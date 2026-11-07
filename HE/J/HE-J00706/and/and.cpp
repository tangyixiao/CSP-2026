#include<bits/stdc++.h>
using namespace std;
int a[100];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n;
	cin>>n;
	int sum=0;
	int zh=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			zh=a[i]&&a[i+j];
			max(sum,zh);
		}
	}
	cout<<sum;
	return 0;
}
