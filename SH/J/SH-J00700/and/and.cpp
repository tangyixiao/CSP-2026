#include<bits\\stdc++.h>
using namespace std;
int main(){
	int n,m,a[20001],sum;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[j+1]>a[j])swap(a[j+1],a[j]);
		}
	}
	sum=a[1];
	for(int i=2;i<=m;i++){
		sum&=a[i];
	}
	cout<<sum;
	return 0;
}
