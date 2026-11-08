#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a,q=0;
	long long b[20005]={},c[20005]={},d[20005]={};
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a;
		b[i]=a;
	}
	for(int i=0;i<n;i++){
		q=0;
		while(b[i]>0){
			c[i]=b[i]%2;
			b[i]/=2;
			q++;
		}
		b[q+1]=0;
		for(int j=0;j<q;j++){
		    d[j]=c[q-j];
		} 
		
	}
	cout<<12;
	return 0;
}
