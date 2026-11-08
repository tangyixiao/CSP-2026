#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n;
	cin>>n;
	int a[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int max1=-10;
	for(int i=0;i<=(1<<n);i++){
		int sum=1<<(n+1)-1;
		
		for(int j=1;j<=n;j++){
			if((i<<(j-1))&1){
				sum=sum&a[j];
			}
		}
		max1=max(sum,max1);
	}
	cout<<max1;
	return 0;
}


