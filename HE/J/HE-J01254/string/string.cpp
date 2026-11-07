#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,c;
	cin>>n>>c;
	long long a[n];
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n-1;i++){
		int sum=0;
		for(int j=0;j<=i;j++){
			if(a[i]!=i+j){
				sum++;
			}
		} 
	}	
	cout<<sum;
	return 0;
}
