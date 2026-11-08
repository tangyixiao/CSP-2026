#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a,b,m=0,n,x=0;
	long long c,d[10000]; 
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c;
		for(int j=0;j<b;j++){
			d[m]=c;
			m++;
		}
	}n=m/2;
	for(int i=0;i<n;i++){
		if(d[i]!=d[m-i-1]){
			x++;
		}
	}
	cout<<x;
	return 0;
}
