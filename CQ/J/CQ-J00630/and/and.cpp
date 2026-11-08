#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200000],sum=0,b;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			b=a[i] and a[j];
			cout<<a[i]<<" "<<a[j]<<endl;
			if(b>sum){
				sum=b;
			}
		}
	}
	cout<<sum;
	return 0;
} 
