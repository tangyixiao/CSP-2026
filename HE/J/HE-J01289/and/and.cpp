#include <bits/stdc++.h>
using namespace std;
int n,m,sum;
int n1[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>n1[i];
	}
	
	if(m==1){
		sort(n1,n1+n);
		cout<<n1[n-1];
	}
	if(m==n){
		sum=n1[0];
		int sum1=n1[0];
		for(int i=0;i<n;i++){
			sum1=sum||n1[i];
			sum=sum1;
			cout<<sum<<" ";
		}
		cout<<sum;
	}
	if(m==2){
		
	}
	return 0;
}
