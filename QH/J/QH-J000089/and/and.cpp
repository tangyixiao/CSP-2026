#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long a,b,c[10000],d[10000],m=0,n,x=0;
	cin>>a>>b;
	m=a-b+1;
	for(int i=0;i<=m;i++){
		n=n+i;
	}
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
	freclose(stdin);
	freclose(stdout);
	return 0;
}
